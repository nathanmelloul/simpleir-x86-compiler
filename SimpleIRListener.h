
// Generated from SimpleIR.g4 by ANTLR 4.10

#pragma once


#include "antlr4-runtime.h"
#include "SimpleIRParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SimpleIRParser.
 */
class  SimpleIRListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterUnit(SimpleIRParser::UnitContext *ctx) = 0;
  virtual void exitUnit(SimpleIRParser::UnitContext *ctx) = 0;

  virtual void enterFunction(SimpleIRParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(SimpleIRParser::FunctionContext *ctx) = 0;

  virtual void enterLocalVariables(SimpleIRParser::LocalVariablesContext *ctx) = 0;
  virtual void exitLocalVariables(SimpleIRParser::LocalVariablesContext *ctx) = 0;

  virtual void enterParameters(SimpleIRParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(SimpleIRParser::ParametersContext *ctx) = 0;

  virtual void enterReturnStatement(SimpleIRParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(SimpleIRParser::ReturnStatementContext *ctx) = 0;

  virtual void enterEnd(SimpleIRParser::EndContext *ctx) = 0;
  virtual void exitEnd(SimpleIRParser::EndContext *ctx) = 0;

  virtual void enterStatement(SimpleIRParser::StatementContext *ctx) = 0;
  virtual void exitStatement(SimpleIRParser::StatementContext *ctx) = 0;

  virtual void enterOperation(SimpleIRParser::OperationContext *ctx) = 0;
  virtual void exitOperation(SimpleIRParser::OperationContext *ctx) = 0;

  virtual void enterAssign(SimpleIRParser::AssignContext *ctx) = 0;
  virtual void exitAssign(SimpleIRParser::AssignContext *ctx) = 0;

  virtual void enterDereference(SimpleIRParser::DereferenceContext *ctx) = 0;
  virtual void exitDereference(SimpleIRParser::DereferenceContext *ctx) = 0;

  virtual void enterReference(SimpleIRParser::ReferenceContext *ctx) = 0;
  virtual void exitReference(SimpleIRParser::ReferenceContext *ctx) = 0;

  virtual void enterAssignDereference(SimpleIRParser::AssignDereferenceContext *ctx) = 0;
  virtual void exitAssignDereference(SimpleIRParser::AssignDereferenceContext *ctx) = 0;

  virtual void enterCall(SimpleIRParser::CallContext *ctx) = 0;
  virtual void exitCall(SimpleIRParser::CallContext *ctx) = 0;

  virtual void enterLabel(SimpleIRParser::LabelContext *ctx) = 0;
  virtual void exitLabel(SimpleIRParser::LabelContext *ctx) = 0;

  virtual void enterGotoStatement(SimpleIRParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(SimpleIRParser::GotoStatementContext *ctx) = 0;

  virtual void enterIfGoto(SimpleIRParser::IfGotoContext *ctx) = 0;
  virtual void exitIfGoto(SimpleIRParser::IfGotoContext *ctx) = 0;


};

