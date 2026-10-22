#include <iostream>
#include <cmath>
#include <vector>

#include <stdio.h>

#include "antlr4-runtime.h"

#include "SimpleIRLexer.h"
#include "SimpleIRParser.h"
#include "SimpleIRBaseListener.h"

using namespace antlr4;
using namespace std;

const int bytewidth = 8;
static const char *registers[] = { "%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9" };

const char *filename;
map<string, int> symtab;
int stackoffset = 0;

static string operand_to_string(antlr4::Token *token) {
  stringstream operand;
  if (SimpleIRParser::NAME == token->getType()) {
    operand << symtab[token->getText()] << "(%rbp)";
  } else if (SimpleIRParser::NUM == token->getType()) {
    operand << "$" << token->getText();
  } else {
    assert(false);
  }
  return operand.str();
}

class CodeGen : public SimpleIRBaseListener {
public:
  virtual void enterUnit(SimpleIRParser::UnitContext * ctx) override {
  }

  virtual void enterFunction(SimpleIRParser::FunctionContext * ctx) override {
  }

  virtual void enterEnd(SimpleIRParser::EndContext * ctx) override {
  }

  virtual void enterLocalVariables(SimpleIRParser::LocalVariablesContext * ctx) override {
  }

  virtual void enterParameters(SimpleIRParser::ParametersContext * ctx) override {
  }

  virtual void enterReturnStatement(SimpleIRParser::ReturnStatementContext * ctx) override {
  }

  virtual void enterStatement(SimpleIRParser::StatementContext * ctx) override {
  }

  virtual void enterAssign(SimpleIRParser::AssignContext * ctx) override {
  }

  virtual void enterOperation(SimpleIRParser::OperationContext * ctx) override {
  }

  virtual void enterCall(SimpleIRParser::CallContext * ctx) override {
  }

  virtual void enterLabel(SimpleIRParser::LabelContext * ctx) override {
  }

  virtual void enterGotoStatement(SimpleIRParser::GotoStatementContext * ctx) override {
  }

  virtual void enterIfGoto(SimpleIRParser::IfGotoContext * ctx) override {
  }

  virtual void enterDereference(SimpleIRParser::DereferenceContext * ctx) override {
  }

  virtual void enterReference(SimpleIRParser::ReferenceContext * ctx) override {
  }

  virtual void enterAssignDereference(SimpleIRParser::AssignDereferenceContext * ctx) override {
  }

};

int main(int argc, const char* argv[]) {
  ANTLRInputStream *input;

  if (argc > 1) {
    ifstream fstream;
    filename = argv[1];
    fstream.open(filename);
    ANTLRInputStream *finput = new ANTLRInputStream(fstream);
    input = finput;
  } else {
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
