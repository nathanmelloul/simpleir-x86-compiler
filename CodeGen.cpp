/* COP 3402 CodeGen Project 2
This program is written by: Nathan Alexander Melloul */

#include <iostream>
#include <cmath>
#include <vector>

#include <stdio.h>

#include "antlr4-runtime.h"

#include "SimpleIRLexer.h"
#include "SimpleIRParser.h"
#include "SimpleIRBaseListener.h"
#include "iolib.c"

using namespace antlr4;
using namespace std;

const int bytewidth = 8;
static const char *registers[] = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9"};

const char *filename;

// This is the actual "stack"
// Holds offset(%rbp) local variables
map<string, int> symtab;

// How much stack space is currently allocated
int stackoffset = 0;

// Given
static string operand_to_string(antlr4::Token *token)
{
	stringstream operand;

	if (SimpleIRParser::NAME == token->getType())
	{
		operand << symtab[token->getText()] << "(%rbp)";
	}
	else if (SimpleIRParser::NUM == token->getType())
	{
		operand << "$" << token->getText();
	}
	else
	{
		assert(false);
	}
	return operand.str();
}


class CodeGen : public SimpleIRBaseListener
{
public:

	// Assembly program headers, triggered on start:
	// Given
	virtual void enterUnit(SimpleIRParser::UnitContext * ctx) override 
	{
		// filename
		// \t = tab

		cout << "\t.file \"" << filename << "\"" << endl;
		cout << "\t.section .note.GNU-stack,\"\",@progbits" << endl;
		cout << "\t.text" << endl;
	}

	// TODO (done 3)
	virtual void enterFunction(SimpleIRParser::FunctionContext * ctx) override 
	{
		string name = ctx->functionName->getText();

		// Standard .asm function header
		cout << "\t.globl " << name << endl;
		cout << "\t.type " << name << ", @function" << endl;
		cout << name << ":" << endl;

		// Prologue already handled
		cout << "\t# prologue, update stack pointer" << endl;
		cout << "\tpushq\t%rbp # save old base ponter" << endl;
		cout << "\tmovq\t%rsp, %rbp # set new base pointer" << endl;
		cout << "\tpush\t%rbx # %rbx is callee-saved" << endl;
	}
 
	// TODO (done 3)
	virtual void enterEnd(SimpleIRParser::EndContext * ctx) override 
	{
		// cout << "\t# epilogue" << endl;
		cout << "\tadd\t$" << stackoffset << ", %rsp" << endl;
		cout << "\tpop\t%rbx # restore %rbx" << endl;
		cout << "\tpop\t%rbp # restore old base pointer" << endl;
		cout << "\tret" << endl;
	}

	// Given
	virtual void enterLocalVariables(SimpleIRParser::LocalVariablesContext * ctx) override 
	{
		auto variables = ctx->variables;

		// start from of an offset of 2x bytewidth from rbp, 1 to start after rbp
		// and another 1 to skip rbx which will have already been pushed
		int starting_offset = 2;

		for (int variable_i = 0; variable_i < variables.size(); variable_i++) 
		{
			string variable = variables[variable_i]->getText();
			int offset = (starting_offset + variable_i) * bytewidth;
			symtab[variable] = -1 * offset;
		}

		// compute size of the stack space needed
		int stackspace = variables.size() * bytewidth;

		// ceiling to 8 bytes
		stackoffset = std::ceil(stackspace / 8) * 8;

		// align to 16 bytes, accounting for rbx being pushed by adding 8
		stackoffset += (stackoffset + 8) % 16;
  
		// emit the subtraction to allocate stack space
		cout << "\t# allocate stack space for locals" << endl;
		cout << "\tsub\t$" << stackoffset << ", %rsp" << endl;
	}

	// TODO (done 3)
	virtual void enterParameters(SimpleIRParser::ParametersContext * ctx) override 
	{
		auto params = ctx->formals;

		int paramCount = params.size();
		int starting_offset = 2;

		// Enter params into local stack
		for (int i = 0; i < paramCount; i++)
		{
			string name = params[i]->getText();

			int localVariableOffset = symtab[name];

			// Move params from caller to local variable "x" on current stack
			if (i > 6)
			{
				// Start at +16(%rbp) above our current stack
				int offset = (starting_offset + (i - 6)) * bytewidth;

				// Move parameter from stack into %rax
				cout << "\tmov\t" << offset << "(%rbp), %rax" << endl;

				// Move parameter from %rax into local variable "x" on current stack
				cout << "\tmov\t%rax, " << localVariableOffset << "(%rbp)" << endl;
			}

			// Move params from registers to local variable "x" on current stack
			else
			{
				cout << "\tmov\t" << registers[i] << ", " << localVariableOffset << "(%rbp)" << endl;
			}
		}
	}

	// TODO (done 3)
	virtual void enterReturnStatement(SimpleIRParser::ReturnStatementContext * ctx) override 
	{
		string operand = operand_to_string(ctx->operand);

		// cout << "\t# set return value" << endl;

		cout << "\tmov\t" << operand << ", %rax" << endl;
	}

	// Given
	virtual void enterStatement(SimpleIRParser::StatementContext *ctx) override 
	{
		// Shared by all
		// No unique behaviour
	}

	// Given
	virtual void enterAssign(SimpleIRParser::AssignContext *ctx) override
	{
		string operand = operand_to_string(ctx->operand);
		cout << "\t# assign " << ctx->operand->getText() << " to " << ctx->variable->getText() << endl;
		cout << "\tmov\t" << operand << ", %rax" << endl;
		cout << "\tmov\t%rax, " << symtab[ctx->variable->getText()] << "(%rbp)" << endl;
	}

	// Done (1)
	virtual void enterOperation(SimpleIRParser::OperationContext *ctx) override
	{
		string operand1 = operand_to_string(ctx->operand1);
		string operand2 = operand_to_string(ctx->operand2);

		// Move operand1 to %rax
		cout << "\tmov\t" << operand1 << ", %rax" << endl;

		// Perform operation from operand2 onto %rax
		switch (ctx->operatorKind->getType())
		{
			case SimpleIRParser::PLUS:
				cout << "\tadd\t" << operand2 << ", %rax" << endl;
				break;
			case SimpleIRParser::MINUS:
				cout << "\tsub\t" << operand2 << ", %rax" << endl;
				break;
			case SimpleIRParser::STAR:
				cout << "\timul\t" << operand2 << ", %rax" << endl;
				break;

			// IDIV CANNOT TAKE IMMEDIATES, USE REGISTER
			case SimpleIRParser::SLASH:
				// Sign extend %rax
				cout << "\tcqto" << endl;

				// Move operand2 to %rbx
				cout << "\tmov\t" << operand2 << ", %rbx" << endl;

				// Call idiv with %rbx (operand1 / operand2)
				cout << "\tidiv\t%rbx" << endl;
				break;
 
			case SimpleIRParser::PERCENT:
				// Sign extend %rax
				cout << "\tcqto" << endl;

				// Move operand2 to %rbx
				cout << "\tmov\t" << operand2 << ", %rbx" << endl;

				// Call idiv with %rbx (operand1 / operand2)
				cout << "\tidiv\t%rbx" << endl;

				// Remainder in %rdx, must move to %rax
				cout << "\tmov\t%rdx, %rax" << endl;
				break;

			default:
				assert(false);
		}

		// Move result %rax into stack variable "x"
		cout << "\tmov\t%rax, " << symtab[ctx->variable->getText()] << "(%rbp)" << endl;
	}

	// TODO (done 3)
	virtual void enterCall(SimpleIRParser::CallContext * ctx) override 
	{
		string name = ctx->functionName->getText();

		auto actuals = ctx->actuals;

		int arraySize = actuals.size();

		// More than 6 args
		// Push onto stack in reverse order
		for (int i = arraySize - 1; i >= 6; i--)
		{
			// Move arg into %rax
			cout << "\tmov\t" << operand_to_string(actuals[i]) << ", %rax" << endl;

			// Push value onto stack (address is pushed afterward)
			cout << "\tpush\t%rax" << endl;
		}

		// 6 or less args
		// Registers need to be filled with values
		for (int i = 0; i < arraySize && i < 6; i++)
		{
			// Move each param into the correct register
			cout << "\tmov\t" << operand_to_string(actuals[i]) << ", " << registers[i] << endl;
		}

		// Call func
		cout << "\tcall\t" << name << endl;

		// We have to pop the arguments from the stack after
		if (nActuals > 6)
		{
			cout << "\tadd\t$" << ((nActuals - 6) * bytewidth) << ", %rsp" << endl;
		}

		// After function is called, move result (%rax) into the specified stack variable "x" (x := call func)
		cout << "\tmov\t%rax, " << symtab[ctx->variable->getText()] << "(%rbp)" << endl;
	}

	// Done (1)
	virtual void enterLabel(SimpleIRParser::LabelContext *ctx) override
	{
		// Print label
		cout << ctx->labelName->getText() << ":" << endl;
	}

	// Done (1)
	virtual void enterGotoStatement(SimpleIRParser::GotoStatementContext *ctx) override
	{
		// Jump to label text (simple jump)
		cout << "\tjmp\t" << ctx->labelName->getText() << endl;
	}

	// Done (1)
	virtual void enterIfGoto(SimpleIRParser::IfGotoContext *ctx) override
	{
		string operand1 = operand_to_string(ctx->operand1);
		string operand2 = operand_to_string(ctx->operand2);

		// Move operand1 into %rax
		cout << "\tmov\t" << operand1 << ", %rax" << endl;

		// Destination minus source always
		cout << "\tcmp\t" << operand2 << ", %rax" << endl;

		// Jump type depends on operator
		switch (ctx->operatorKind->getType())
		{
			case SimpleIRParser::EQ:
				// Jump equal
				cout << "\tje\t" << ctx->labelName->getText() << endl;
				break;
			case SimpleIRParser::NEQ:
				// Jump not equal
				cout << "\tjne\t" << ctx->labelName->getText() << endl;
				break;
			case SimpleIRParser::LT:
				// Jump less than
				cout << "\tjl\t" << ctx->labelName->getText() << endl;
				break;
			case SimpleIRParser::LTE:
				// Jump less than or equal
				cout << "\tjle\t" << ctx->labelName->getText() << endl;
				break;
			case SimpleIRParser::GT:
				// Jump greater than
				cout << "\tjg\t" << ctx->labelName->getText() << endl;
				break;
			case SimpleIRParser::GTE:
				// Jump greater than or equal
				cout << "\tjge\t" << ctx->labelName->getText() << endl;
				break;
			default:
				assert(false);
		}
	}

	// Done (2)
	virtual void enterDereference(SimpleIRParser::DereferenceContext *ctx) override
	{
		// Operand holds the address
		string pointer = operand_to_string(ctx->operand);

		// Move address into %rax
		cout << "\tmov\t" << pointer << ", %rax" << endl;

		// Dereference parenthesis
		cout << "\tmov\t(%rax), %rax" << endl;

		// Store result back into stack
		cout << "\tmov\t%rax, " << symtab[ctx->variable->getText()] << "(%rbp)" << endl;
	}

	// Done (2)
	virtual void enterReference(SimpleIRParser::ReferenceContext *ctx) override
	{
		// Get variable address, put it into %rax
		cout << "\tlea\t" << symtab[ctx->operand->getText()] << "(%rbp), %rax" << endl;

		// Move this address value into stack variable "x"
		cout << "\tmov\t%rax, " << symtab[ctx->variable->getText()] << "(%rbp)" << endl;
	}

	// Done (2)
	virtual void enterAssignDereference(SimpleIRParser::AssignDereferenceContext *ctx) override
	{
		// Operand contains the value
		string operand = operand_to_string(ctx->operand);

		// Move value into %rax
		cout << "\tmov\t" << operand << ", %rax" << endl;

		// Variable contains the pointer/address, move it into %rbx
		cout << "\tmov\t" << symtab[ctx->variable->getText()] << "(%rbp), %rbx" << endl;

		// Move value of %rax into the slot pointed by address %rbx
		cout << "\tmov\t%rax, (%rbx)" << endl;
	}
};

int main(int argc, const char *argv[])
{
	ANTLRInputStream *input;

	if (argc > 1)
	{
		ifstream fstream;
		filename = argv[1];
		fstream.open(filename);
		ANTLRInputStream *finput = new ANTLRInputStream(fstream);
		input = finput;
	}

	else
	{
		filename = "stdin";
		input = new ANTLRInputStream(cin);
	}

	SimpleIRLexer lexer(input);
	CommonTokenStream tokens(&lexer);
	SimpleIRParser parser(&tokens);

	tree::ParseTree *tree = parser.unit();
	CodeGen listener;
	tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

	return 0;
}
