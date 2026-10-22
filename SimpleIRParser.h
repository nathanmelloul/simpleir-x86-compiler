
// Generated from SimpleIR.g4 by ANTLR 4.10

#pragma once


#include "antlr4-runtime.h"




class  SimpleIRParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, NAME = 12, NUM = 13, PLUS = 14, 
    MINUS = 15, STAR = 16, SLASH = 17, PERCENT = 18, EQ = 19, NEQ = 20, 
    LT = 21, LTE = 22, GT = 23, GTE = 24, WS = 25, COMMENT = 26
  };

  enum {
    RuleUnit = 0, RuleFunction = 1, RuleLocalVariables = 2, RuleParameters = 3, 
    RuleReturnStatement = 4, RuleEnd = 5, RuleStatement = 6, RuleOperation = 7, 
    RuleAssign = 8, RuleDereference = 9, RuleReference = 10, RuleAssignDereference = 11, 
    RuleCall = 12, RuleLabel = 13, RuleGotoStatement = 14, RuleIfGoto = 15
  };

  explicit SimpleIRParser(antlr4::TokenStream *input);

  SimpleIRParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SimpleIRParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class UnitContext;
  class FunctionContext;
  class LocalVariablesContext;
  class ParametersContext;
  class ReturnStatementContext;
  class EndContext;
  class StatementContext;
  class OperationContext;
  class AssignContext;
  class DereferenceContext;
  class ReferenceContext;
  class AssignDereferenceContext;
  class CallContext;
  class LabelContext;
  class GotoStatementContext;
  class IfGotoContext; 

  class  UnitContext : public antlr4::ParserRuleContext {
  public:
    UnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnitContext* unit();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *functionName = nullptr;
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReturnStatementContext *returnStatement();
    EndContext *end();
    antlr4::tree::TerminalNode *NAME();
    LocalVariablesContext *localVariables();
    ParametersContext *parameters();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  LocalVariablesContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nameToken = nullptr;
    std::vector<antlr4::Token *> variables;
    LocalVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalVariablesContext* localVariables();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *nameToken = nullptr;
    std::vector<antlr4::Token *> formals;
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParametersContext* parameters();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operand = nullptr;
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndContext* end();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignContext *assign();
    DereferenceContext *dereference();
    ReferenceContext *reference();
    AssignDereferenceContext *assignDereference();
    OperationContext *operation();
    CallContext *call();
    LabelContext *label();
    GotoStatementContext *gotoStatement();
    IfGotoContext *ifGoto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *variable = nullptr;
    antlr4::Token *operand1 = nullptr;
    antlr4::Token *operatorKind = nullptr;
    antlr4::Token *operand2 = nullptr;
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperationContext* operation();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *variable = nullptr;
    antlr4::Token *operand = nullptr;
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignContext* assign();

  class  DereferenceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *variable = nullptr;
    antlr4::Token *operand = nullptr;
    DereferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DereferenceContext* dereference();

  class  ReferenceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *variable = nullptr;
    antlr4::Token *operand = nullptr;
    ReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceContext* reference();

  class  AssignDereferenceContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *variable = nullptr;
    antlr4::Token *operand = nullptr;
    AssignDereferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *NUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignDereferenceContext* assignDereference();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *variable = nullptr;
    antlr4::Token *functionName = nullptr;
    antlr4::Token *nameToken = nullptr;
    std::vector<antlr4::Token *> actuals;
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallContext* call();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *labelName = nullptr;
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *labelName = nullptr;
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  IfGotoContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operand1 = nullptr;
    antlr4::Token *operatorKind = nullptr;
    antlr4::Token *operand2 = nullptr;
    antlr4::Token *labelName = nullptr;
    IfGotoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfGotoContext* ifGoto();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

