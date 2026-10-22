
// Generated from SimpleIR.g4 by ANTLR 4.10

#pragma once


#include "antlr4-runtime.h"
#include "SimpleIRListener.h"


/**
 * This class provides an empty implementation of SimpleIRListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SimpleIRBaseListener : public SimpleIRListener {
public:

  virtual void enterUnit(SimpleIRParser::UnitContext * /*ctx*/) override { }
  virtual void exitUnit(SimpleIRParser::UnitContext * /*ctx*/) override { }

  virtual void enterFunction(SimpleIRParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(SimpleIRParser::FunctionContext * /*ctx*/) override { }

  virtual void enterLocalVariables(SimpleIRParser::LocalVariablesContext * /*ctx*/) override { }
  virtual void exitLocalVariables(SimpleIRParser::LocalVariablesContext * /*ctx*/) override { }

  virtual void enterParameters(SimpleIRParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(SimpleIRParser::ParametersContext * /*ctx*/) override { }

  virtual void enterReturnStatement(SimpleIRParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(SimpleIRParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterEnd(SimpleIRParser::EndContext * /*ctx*/) override { }
  virtual void exitEnd(SimpleIRParser::EndContext * /*ctx*/) override { }

  virtual void enterStatement(SimpleIRParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(SimpleIRParser::StatementContext * /*ctx*/) override { }

  virtual void enterOperation(SimpleIRParser::OperationContext * /*ctx*/) override { }
  virtual void exitOperation(SimpleIRParser::OperationContext * /*ctx*/) override { }

  virtual void enterAssign(SimpleIRParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(SimpleIRParser::AssignContext * /*ctx*/) override { }

  virtual void enterDereference(SimpleIRParser::DereferenceContext * /*ctx*/) override { }
  virtual void exitDereference(SimpleIRParser::DereferenceContext * /*ctx*/) override { }

  virtual void enterReference(SimpleIRParser::ReferenceContext * /*ctx*/) override { }
  virtual void exitReference(SimpleIRParser::ReferenceContext * /*ctx*/) override { }

  virtual void enterAssignDereference(SimpleIRParser::AssignDereferenceContext * /*ctx*/) override { }
  virtual void exitAssignDereference(SimpleIRParser::AssignDereferenceContext * /*ctx*/) override { }

  virtual void enterCall(SimpleIRParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(SimpleIRParser::CallContext * /*ctx*/) override { }

  virtual void enterLabel(SimpleIRParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(SimpleIRParser::LabelContext * /*ctx*/) override { }

  virtual void enterGotoStatement(SimpleIRParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(SimpleIRParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterIfGoto(SimpleIRParser::IfGotoContext * /*ctx*/) override { }
  virtual void exitIfGoto(SimpleIRParser::IfGotoContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

