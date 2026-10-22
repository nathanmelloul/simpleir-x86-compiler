
// Generated from SimpleIR.g4 by ANTLR 4.10


#include "SimpleIRListener.h"

#include "SimpleIRParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SimpleIRParserStaticData final {
  SimpleIRParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SimpleIRParserStaticData(const SimpleIRParserStaticData&) = delete;
  SimpleIRParserStaticData(SimpleIRParserStaticData&&) = delete;
  SimpleIRParserStaticData& operator=(const SimpleIRParserStaticData&) = delete;
  SimpleIRParserStaticData& operator=(SimpleIRParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag simpleirParserOnceFlag;
SimpleIRParserStaticData *simpleirParserStaticData = nullptr;

void simpleirParserInitialize() {
  assert(simpleirParserStaticData == nullptr);
  auto staticData = std::make_unique<SimpleIRParserStaticData>(
    std::vector<std::string>{
      "unit", "function", "localVariables", "parameters", "returnStatement", 
      "end", "statement", "operation", "assign", "dereference", "reference", 
      "assignDereference", "call", "label", "gotoStatement", "ifGoto"
    },
    std::vector<std::string>{
      "", "'function'", "'localVariables'", "'parameters'", "'return'", 
      "'end'", "':='", "'&'", "'call'", "':'", "'goto'", "'if'", "", "", 
      "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "'!='", "'<'", "'<='", "'>'", 
      "'>='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "NAME", "NUM", "PLUS", 
      "MINUS", "STAR", "SLASH", "PERCENT", "EQ", "NEQ", "LT", "LTE", "GT", 
      "GTE", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,26,129,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,1,1,1,1,1,1,3,1,38,8,1,1,1,3,1,41,8,1,1,1,5,1,44,
  	8,1,10,1,12,1,47,9,1,1,1,1,1,1,1,1,2,1,2,4,2,54,8,2,11,2,12,2,55,1,3,
  	1,3,4,3,60,8,3,11,3,12,3,61,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,3,6,79,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,
  	1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,12,5,12,111,8,12,10,12,12,12,114,9,12,1,13,1,13,
  	1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,0,0,16,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,0,3,1,0,12,13,1,0,14,18,1,0,
  	19,24,126,0,32,1,0,0,0,2,34,1,0,0,0,4,51,1,0,0,0,6,57,1,0,0,0,8,63,1,
  	0,0,0,10,66,1,0,0,0,12,78,1,0,0,0,14,80,1,0,0,0,16,86,1,0,0,0,18,90,1,
  	0,0,0,20,95,1,0,0,0,22,100,1,0,0,0,24,105,1,0,0,0,26,115,1,0,0,0,28,118,
  	1,0,0,0,30,121,1,0,0,0,32,33,3,2,1,0,33,1,1,0,0,0,34,35,5,1,0,0,35,37,
  	5,12,0,0,36,38,3,4,2,0,37,36,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,0,39,41,
  	3,6,3,0,40,39,1,0,0,0,40,41,1,0,0,0,41,45,1,0,0,0,42,44,3,12,6,0,43,42,
  	1,0,0,0,44,47,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,45,
  	1,0,0,0,48,49,3,8,4,0,49,50,3,10,5,0,50,3,1,0,0,0,51,53,5,2,0,0,52,54,
  	5,12,0,0,53,52,1,0,0,0,54,55,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,5,
  	1,0,0,0,57,59,5,3,0,0,58,60,5,12,0,0,59,58,1,0,0,0,60,61,1,0,0,0,61,59,
  	1,0,0,0,61,62,1,0,0,0,62,7,1,0,0,0,63,64,5,4,0,0,64,65,7,0,0,0,65,9,1,
  	0,0,0,66,67,5,5,0,0,67,68,5,1,0,0,68,11,1,0,0,0,69,79,3,16,8,0,70,79,
  	3,18,9,0,71,79,3,20,10,0,72,79,3,22,11,0,73,79,3,14,7,0,74,79,3,24,12,
  	0,75,79,3,26,13,0,76,79,3,28,14,0,77,79,3,30,15,0,78,69,1,0,0,0,78,70,
  	1,0,0,0,78,71,1,0,0,0,78,72,1,0,0,0,78,73,1,0,0,0,78,74,1,0,0,0,78,75,
  	1,0,0,0,78,76,1,0,0,0,78,77,1,0,0,0,79,13,1,0,0,0,80,81,5,12,0,0,81,82,
  	5,6,0,0,82,83,7,0,0,0,83,84,7,1,0,0,84,85,7,0,0,0,85,15,1,0,0,0,86,87,
  	5,12,0,0,87,88,5,6,0,0,88,89,7,0,0,0,89,17,1,0,0,0,90,91,5,12,0,0,91,
  	92,5,6,0,0,92,93,5,16,0,0,93,94,5,12,0,0,94,19,1,0,0,0,95,96,5,12,0,0,
  	96,97,5,6,0,0,97,98,5,7,0,0,98,99,5,12,0,0,99,21,1,0,0,0,100,101,5,16,
  	0,0,101,102,5,12,0,0,102,103,5,6,0,0,103,104,7,0,0,0,104,23,1,0,0,0,105,
  	106,5,12,0,0,106,107,5,6,0,0,107,108,5,8,0,0,108,112,5,12,0,0,109,111,
  	5,12,0,0,110,109,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,
  	0,0,113,25,1,0,0,0,114,112,1,0,0,0,115,116,5,12,0,0,116,117,5,9,0,0,117,
  	27,1,0,0,0,118,119,5,10,0,0,119,120,5,12,0,0,120,29,1,0,0,0,121,122,5,
  	11,0,0,122,123,7,0,0,0,123,124,7,2,0,0,124,125,7,0,0,0,125,126,5,10,0,
  	0,126,127,5,12,0,0,127,31,1,0,0,0,7,37,40,45,55,61,78,112
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  simpleirParserStaticData = staticData.release();
}

}

SimpleIRParser::SimpleIRParser(TokenStream *input) : SimpleIRParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SimpleIRParser::SimpleIRParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SimpleIRParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *simpleirParserStaticData->atn, simpleirParserStaticData->decisionToDFA, simpleirParserStaticData->sharedContextCache, options);
}

SimpleIRParser::~SimpleIRParser() {
  delete _interpreter;
}

const atn::ATN& SimpleIRParser::getATN() const {
  return *simpleirParserStaticData->atn;
}

std::string SimpleIRParser::getGrammarFileName() const {
  return "SimpleIR.g4";
}

const std::vector<std::string>& SimpleIRParser::getRuleNames() const {
  return simpleirParserStaticData->ruleNames;
}

const dfa::Vocabulary& SimpleIRParser::getVocabulary() const {
  return simpleirParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SimpleIRParser::getSerializedATN() const {
  return simpleirParserStaticData->serializedATN;
}


//----------------- UnitContext ------------------------------------------------------------------

SimpleIRParser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleIRParser::FunctionContext* SimpleIRParser::UnitContext::function() {
  return getRuleContext<SimpleIRParser::FunctionContext>(0);
}


size_t SimpleIRParser::UnitContext::getRuleIndex() const {
  return SimpleIRParser::RuleUnit;
}

void SimpleIRParser::UnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnit(this);
}

void SimpleIRParser::UnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnit(this);
}

SimpleIRParser::UnitContext* SimpleIRParser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleIRParser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

SimpleIRParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleIRParser::ReturnStatementContext* SimpleIRParser::FunctionContext::returnStatement() {
  return getRuleContext<SimpleIRParser::ReturnStatementContext>(0);
}

SimpleIRParser::EndContext* SimpleIRParser::FunctionContext::end() {
  return getRuleContext<SimpleIRParser::EndContext>(0);
}

tree::TerminalNode* SimpleIRParser::FunctionContext::NAME() {
  return getToken(SimpleIRParser::NAME, 0);
}

SimpleIRParser::LocalVariablesContext* SimpleIRParser::FunctionContext::localVariables() {
  return getRuleContext<SimpleIRParser::LocalVariablesContext>(0);
}

SimpleIRParser::ParametersContext* SimpleIRParser::FunctionContext::parameters() {
  return getRuleContext<SimpleIRParser::ParametersContext>(0);
}

std::vector<SimpleIRParser::StatementContext *> SimpleIRParser::FunctionContext::statement() {
  return getRuleContexts<SimpleIRParser::StatementContext>();
}

SimpleIRParser::StatementContext* SimpleIRParser::FunctionContext::statement(size_t i) {
  return getRuleContext<SimpleIRParser::StatementContext>(i);
}


size_t SimpleIRParser::FunctionContext::getRuleIndex() const {
  return SimpleIRParser::RuleFunction;
}

void SimpleIRParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void SimpleIRParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

SimpleIRParser::FunctionContext* SimpleIRParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleIRParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(SimpleIRParser::T__0);
    setState(35);
    antlrcpp::downCast<FunctionContext *>(_localctx)->functionName = match(SimpleIRParser::NAME);
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleIRParser::T__1) {
      setState(36);
      localVariables();
    }
    setState(40);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleIRParser::T__2) {
      setState(39);
      parameters();
    }
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SimpleIRParser::T__9)
      | (1ULL << SimpleIRParser::T__10)
      | (1ULL << SimpleIRParser::NAME)
      | (1ULL << SimpleIRParser::STAR))) != 0)) {
      setState(42);
      statement();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
    returnStatement();
    setState(49);
    end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariablesContext ------------------------------------------------------------------

SimpleIRParser::LocalVariablesContext::LocalVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::LocalVariablesContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::LocalVariablesContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}


size_t SimpleIRParser::LocalVariablesContext::getRuleIndex() const {
  return SimpleIRParser::RuleLocalVariables;
}

void SimpleIRParser::LocalVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariables(this);
}

void SimpleIRParser::LocalVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariables(this);
}

SimpleIRParser::LocalVariablesContext* SimpleIRParser::localVariables() {
  LocalVariablesContext *_localctx = _tracker.createInstance<LocalVariablesContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleIRParser::RuleLocalVariables);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(SimpleIRParser::T__1);
    setState(53); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(52);
              antlrcpp::downCast<LocalVariablesContext *>(_localctx)->nameToken = match(SimpleIRParser::NAME);
              antlrcpp::downCast<LocalVariablesContext *>(_localctx)->variables.push_back(antlrcpp::downCast<LocalVariablesContext *>(_localctx)->nameToken);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(55); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

SimpleIRParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::ParametersContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::ParametersContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}


size_t SimpleIRParser::ParametersContext::getRuleIndex() const {
  return SimpleIRParser::RuleParameters;
}

void SimpleIRParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void SimpleIRParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}

SimpleIRParser::ParametersContext* SimpleIRParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 6, SimpleIRParser::RuleParameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(SimpleIRParser::T__2);
    setState(59); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(58);
              antlrcpp::downCast<ParametersContext *>(_localctx)->nameToken = match(SimpleIRParser::NAME);
              antlrcpp::downCast<ParametersContext *>(_localctx)->formals.push_back(antlrcpp::downCast<ParametersContext *>(_localctx)->nameToken);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(61); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

SimpleIRParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleIRParser::ReturnStatementContext::NAME() {
  return getToken(SimpleIRParser::NAME, 0);
}

tree::TerminalNode* SimpleIRParser::ReturnStatementContext::NUM() {
  return getToken(SimpleIRParser::NUM, 0);
}


size_t SimpleIRParser::ReturnStatementContext::getRuleIndex() const {
  return SimpleIRParser::RuleReturnStatement;
}

void SimpleIRParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void SimpleIRParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

SimpleIRParser::ReturnStatementContext* SimpleIRParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, SimpleIRParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(SimpleIRParser::T__3);
    setState(64);
    antlrcpp::downCast<ReturnStatementContext *>(_localctx)->operand = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<ReturnStatementContext *>(_localctx)->operand = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndContext ------------------------------------------------------------------

SimpleIRParser::EndContext::EndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleIRParser::EndContext::getRuleIndex() const {
  return SimpleIRParser::RuleEnd;
}

void SimpleIRParser::EndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnd(this);
}

void SimpleIRParser::EndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnd(this);
}

SimpleIRParser::EndContext* SimpleIRParser::end() {
  EndContext *_localctx = _tracker.createInstance<EndContext>(_ctx, getState());
  enterRule(_localctx, 10, SimpleIRParser::RuleEnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(SimpleIRParser::T__4);
    setState(67);
    match(SimpleIRParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SimpleIRParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleIRParser::AssignContext* SimpleIRParser::StatementContext::assign() {
  return getRuleContext<SimpleIRParser::AssignContext>(0);
}

SimpleIRParser::DereferenceContext* SimpleIRParser::StatementContext::dereference() {
  return getRuleContext<SimpleIRParser::DereferenceContext>(0);
}

SimpleIRParser::ReferenceContext* SimpleIRParser::StatementContext::reference() {
  return getRuleContext<SimpleIRParser::ReferenceContext>(0);
}

SimpleIRParser::AssignDereferenceContext* SimpleIRParser::StatementContext::assignDereference() {
  return getRuleContext<SimpleIRParser::AssignDereferenceContext>(0);
}

SimpleIRParser::OperationContext* SimpleIRParser::StatementContext::operation() {
  return getRuleContext<SimpleIRParser::OperationContext>(0);
}

SimpleIRParser::CallContext* SimpleIRParser::StatementContext::call() {
  return getRuleContext<SimpleIRParser::CallContext>(0);
}

SimpleIRParser::LabelContext* SimpleIRParser::StatementContext::label() {
  return getRuleContext<SimpleIRParser::LabelContext>(0);
}

SimpleIRParser::GotoStatementContext* SimpleIRParser::StatementContext::gotoStatement() {
  return getRuleContext<SimpleIRParser::GotoStatementContext>(0);
}

SimpleIRParser::IfGotoContext* SimpleIRParser::StatementContext::ifGoto() {
  return getRuleContext<SimpleIRParser::IfGotoContext>(0);
}


size_t SimpleIRParser::StatementContext::getRuleIndex() const {
  return SimpleIRParser::RuleStatement;
}

void SimpleIRParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void SimpleIRParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

SimpleIRParser::StatementContext* SimpleIRParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, SimpleIRParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      dereference();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(71);
      reference();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(72);
      assignDereference();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(73);
      operation();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(74);
      call();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(75);
      label();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(76);
      gotoStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(77);
      ifGoto();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

SimpleIRParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::OperationContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::OperationContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}

std::vector<tree::TerminalNode *> SimpleIRParser::OperationContext::NUM() {
  return getTokens(SimpleIRParser::NUM);
}

tree::TerminalNode* SimpleIRParser::OperationContext::NUM(size_t i) {
  return getToken(SimpleIRParser::NUM, i);
}

tree::TerminalNode* SimpleIRParser::OperationContext::PLUS() {
  return getToken(SimpleIRParser::PLUS, 0);
}

tree::TerminalNode* SimpleIRParser::OperationContext::MINUS() {
  return getToken(SimpleIRParser::MINUS, 0);
}

tree::TerminalNode* SimpleIRParser::OperationContext::STAR() {
  return getToken(SimpleIRParser::STAR, 0);
}

tree::TerminalNode* SimpleIRParser::OperationContext::SLASH() {
  return getToken(SimpleIRParser::SLASH, 0);
}

tree::TerminalNode* SimpleIRParser::OperationContext::PERCENT() {
  return getToken(SimpleIRParser::PERCENT, 0);
}


size_t SimpleIRParser::OperationContext::getRuleIndex() const {
  return SimpleIRParser::RuleOperation;
}

void SimpleIRParser::OperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation(this);
}

void SimpleIRParser::OperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation(this);
}

SimpleIRParser::OperationContext* SimpleIRParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 14, SimpleIRParser::RuleOperation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    antlrcpp::downCast<OperationContext *>(_localctx)->variable = match(SimpleIRParser::NAME);
    setState(81);
    match(SimpleIRParser::T__5);
    setState(82);
    antlrcpp::downCast<OperationContext *>(_localctx)->operand1 = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<OperationContext *>(_localctx)->operand1 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(83);
    antlrcpp::downCast<OperationContext *>(_localctx)->operatorKind = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SimpleIRParser::PLUS)
      | (1ULL << SimpleIRParser::MINUS)
      | (1ULL << SimpleIRParser::STAR)
      | (1ULL << SimpleIRParser::SLASH)
      | (1ULL << SimpleIRParser::PERCENT))) != 0))) {
      antlrcpp::downCast<OperationContext *>(_localctx)->operatorKind = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(84);
    antlrcpp::downCast<OperationContext *>(_localctx)->operand2 = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<OperationContext *>(_localctx)->operand2 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

SimpleIRParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::AssignContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::AssignContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}

tree::TerminalNode* SimpleIRParser::AssignContext::NUM() {
  return getToken(SimpleIRParser::NUM, 0);
}


size_t SimpleIRParser::AssignContext::getRuleIndex() const {
  return SimpleIRParser::RuleAssign;
}

void SimpleIRParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void SimpleIRParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

SimpleIRParser::AssignContext* SimpleIRParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 16, SimpleIRParser::RuleAssign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    antlrcpp::downCast<AssignContext *>(_localctx)->variable = match(SimpleIRParser::NAME);
    setState(87);
    match(SimpleIRParser::T__5);
    setState(88);
    antlrcpp::downCast<AssignContext *>(_localctx)->operand = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<AssignContext *>(_localctx)->operand = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DereferenceContext ------------------------------------------------------------------

SimpleIRParser::DereferenceContext::DereferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleIRParser::DereferenceContext::STAR() {
  return getToken(SimpleIRParser::STAR, 0);
}

std::vector<tree::TerminalNode *> SimpleIRParser::DereferenceContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::DereferenceContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}


size_t SimpleIRParser::DereferenceContext::getRuleIndex() const {
  return SimpleIRParser::RuleDereference;
}

void SimpleIRParser::DereferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDereference(this);
}

void SimpleIRParser::DereferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDereference(this);
}

SimpleIRParser::DereferenceContext* SimpleIRParser::dereference() {
  DereferenceContext *_localctx = _tracker.createInstance<DereferenceContext>(_ctx, getState());
  enterRule(_localctx, 18, SimpleIRParser::RuleDereference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    antlrcpp::downCast<DereferenceContext *>(_localctx)->variable = match(SimpleIRParser::NAME);
    setState(91);
    match(SimpleIRParser::T__5);
    setState(92);
    match(SimpleIRParser::STAR);
    setState(93);
    antlrcpp::downCast<DereferenceContext *>(_localctx)->operand = match(SimpleIRParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceContext ------------------------------------------------------------------

SimpleIRParser::ReferenceContext::ReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::ReferenceContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::ReferenceContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}


size_t SimpleIRParser::ReferenceContext::getRuleIndex() const {
  return SimpleIRParser::RuleReference;
}

void SimpleIRParser::ReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference(this);
}

void SimpleIRParser::ReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference(this);
}

SimpleIRParser::ReferenceContext* SimpleIRParser::reference() {
  ReferenceContext *_localctx = _tracker.createInstance<ReferenceContext>(_ctx, getState());
  enterRule(_localctx, 20, SimpleIRParser::RuleReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    antlrcpp::downCast<ReferenceContext *>(_localctx)->variable = match(SimpleIRParser::NAME);
    setState(96);
    match(SimpleIRParser::T__5);
    setState(97);
    match(SimpleIRParser::T__6);
    setState(98);
    antlrcpp::downCast<ReferenceContext *>(_localctx)->operand = match(SimpleIRParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignDereferenceContext ------------------------------------------------------------------

SimpleIRParser::AssignDereferenceContext::AssignDereferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleIRParser::AssignDereferenceContext::STAR() {
  return getToken(SimpleIRParser::STAR, 0);
}

std::vector<tree::TerminalNode *> SimpleIRParser::AssignDereferenceContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::AssignDereferenceContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}

tree::TerminalNode* SimpleIRParser::AssignDereferenceContext::NUM() {
  return getToken(SimpleIRParser::NUM, 0);
}


size_t SimpleIRParser::AssignDereferenceContext::getRuleIndex() const {
  return SimpleIRParser::RuleAssignDereference;
}

void SimpleIRParser::AssignDereferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignDereference(this);
}

void SimpleIRParser::AssignDereferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignDereference(this);
}

SimpleIRParser::AssignDereferenceContext* SimpleIRParser::assignDereference() {
  AssignDereferenceContext *_localctx = _tracker.createInstance<AssignDereferenceContext>(_ctx, getState());
  enterRule(_localctx, 22, SimpleIRParser::RuleAssignDereference);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(SimpleIRParser::STAR);
    setState(101);
    antlrcpp::downCast<AssignDereferenceContext *>(_localctx)->variable = match(SimpleIRParser::NAME);
    setState(102);
    match(SimpleIRParser::T__5);
    setState(103);
    antlrcpp::downCast<AssignDereferenceContext *>(_localctx)->operand = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<AssignDereferenceContext *>(_localctx)->operand = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

SimpleIRParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::CallContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::CallContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}


size_t SimpleIRParser::CallContext::getRuleIndex() const {
  return SimpleIRParser::RuleCall;
}

void SimpleIRParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void SimpleIRParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}

SimpleIRParser::CallContext* SimpleIRParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 24, SimpleIRParser::RuleCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(105);
    antlrcpp::downCast<CallContext *>(_localctx)->variable = match(SimpleIRParser::NAME);
    setState(106);
    match(SimpleIRParser::T__5);
    setState(107);
    match(SimpleIRParser::T__7);
    setState(108);
    antlrcpp::downCast<CallContext *>(_localctx)->functionName = match(SimpleIRParser::NAME);
    setState(112);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(109);
        antlrcpp::downCast<CallContext *>(_localctx)->nameToken = match(SimpleIRParser::NAME);
        antlrcpp::downCast<CallContext *>(_localctx)->actuals.push_back(antlrcpp::downCast<CallContext *>(_localctx)->nameToken); 
      }
      setState(114);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

SimpleIRParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleIRParser::LabelContext::NAME() {
  return getToken(SimpleIRParser::NAME, 0);
}


size_t SimpleIRParser::LabelContext::getRuleIndex() const {
  return SimpleIRParser::RuleLabel;
}

void SimpleIRParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void SimpleIRParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

SimpleIRParser::LabelContext* SimpleIRParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 26, SimpleIRParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    antlrcpp::downCast<LabelContext *>(_localctx)->labelName = match(SimpleIRParser::NAME);
    setState(116);
    match(SimpleIRParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

SimpleIRParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleIRParser::GotoStatementContext::NAME() {
  return getToken(SimpleIRParser::NAME, 0);
}


size_t SimpleIRParser::GotoStatementContext::getRuleIndex() const {
  return SimpleIRParser::RuleGotoStatement;
}

void SimpleIRParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void SimpleIRParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}

SimpleIRParser::GotoStatementContext* SimpleIRParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, SimpleIRParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(SimpleIRParser::T__9);
    setState(119);
    antlrcpp::downCast<GotoStatementContext *>(_localctx)->labelName = match(SimpleIRParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfGotoContext ------------------------------------------------------------------

SimpleIRParser::IfGotoContext::IfGotoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SimpleIRParser::IfGotoContext::NAME() {
  return getTokens(SimpleIRParser::NAME);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::NAME(size_t i) {
  return getToken(SimpleIRParser::NAME, i);
}

std::vector<tree::TerminalNode *> SimpleIRParser::IfGotoContext::NUM() {
  return getTokens(SimpleIRParser::NUM);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::NUM(size_t i) {
  return getToken(SimpleIRParser::NUM, i);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::EQ() {
  return getToken(SimpleIRParser::EQ, 0);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::NEQ() {
  return getToken(SimpleIRParser::NEQ, 0);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::LT() {
  return getToken(SimpleIRParser::LT, 0);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::LTE() {
  return getToken(SimpleIRParser::LTE, 0);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::GT() {
  return getToken(SimpleIRParser::GT, 0);
}

tree::TerminalNode* SimpleIRParser::IfGotoContext::GTE() {
  return getToken(SimpleIRParser::GTE, 0);
}


size_t SimpleIRParser::IfGotoContext::getRuleIndex() const {
  return SimpleIRParser::RuleIfGoto;
}

void SimpleIRParser::IfGotoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfGoto(this);
}

void SimpleIRParser::IfGotoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SimpleIRListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfGoto(this);
}

SimpleIRParser::IfGotoContext* SimpleIRParser::ifGoto() {
  IfGotoContext *_localctx = _tracker.createInstance<IfGotoContext>(_ctx, getState());
  enterRule(_localctx, 30, SimpleIRParser::RuleIfGoto);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(SimpleIRParser::T__10);
    setState(122);
    antlrcpp::downCast<IfGotoContext *>(_localctx)->operand1 = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<IfGotoContext *>(_localctx)->operand1 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(123);
    antlrcpp::downCast<IfGotoContext *>(_localctx)->operatorKind = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SimpleIRParser::EQ)
      | (1ULL << SimpleIRParser::NEQ)
      | (1ULL << SimpleIRParser::LT)
      | (1ULL << SimpleIRParser::LTE)
      | (1ULL << SimpleIRParser::GT)
      | (1ULL << SimpleIRParser::GTE))) != 0))) {
      antlrcpp::downCast<IfGotoContext *>(_localctx)->operatorKind = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(124);
    antlrcpp::downCast<IfGotoContext *>(_localctx)->operand2 = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == SimpleIRParser::NAME

    || _la == SimpleIRParser::NUM)) {
      antlrcpp::downCast<IfGotoContext *>(_localctx)->operand2 = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(125);
    match(SimpleIRParser::T__9);
    setState(126);
    antlrcpp::downCast<IfGotoContext *>(_localctx)->labelName = match(SimpleIRParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void SimpleIRParser::initialize() {
  std::call_once(simpleirParserOnceFlag, simpleirParserInitialize);
}
