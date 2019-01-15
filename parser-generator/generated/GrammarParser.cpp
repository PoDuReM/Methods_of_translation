
// Generated from Grammar.g4 by ANTLR 4.7.2



#include "GrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

GrammarParser::GrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GrammarParser::~GrammarParser() {
  delete _interpreter;
}

std::string GrammarParser::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

GrammarParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::StartContext::NTERM() {
  return getToken(GrammarParser::NTERM, 0);
}

std::vector<GrammarParser::Non_terminalContext *> GrammarParser::StartContext::non_terminal() {
  return getRuleContexts<GrammarParser::Non_terminalContext>();
}

GrammarParser::Non_terminalContext* GrammarParser::StartContext::non_terminal(size_t i) {
  return getRuleContext<GrammarParser::Non_terminalContext>(i);
}

std::vector<GrammarParser::TerminalContext *> GrammarParser::StartContext::terminal() {
  return getRuleContexts<GrammarParser::TerminalContext>();
}

GrammarParser::TerminalContext* GrammarParser::StartContext::terminal(size_t i) {
  return getRuleContext<GrammarParser::TerminalContext>(i);
}

GrammarParser::Skip_symbolsContext* GrammarParser::StartContext::skip_symbols() {
  return getRuleContext<GrammarParser::Skip_symbolsContext>(0);
}


size_t GrammarParser::StartContext::getRuleIndex() const {
  return GrammarParser::RuleStart;
}


GrammarParser::StartContext* GrammarParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RuleStart);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
    match(GrammarParser::T__0);
    setState(11);
    dynamic_cast<StartContext *>(_localctx)->ntermToken = match(GrammarParser::NTERM);
    setState(12);
    match(GrammarParser::T__1);
     dynamic_cast<StartContext *>(_localctx)->grammar =  Grammar((dynamic_cast<StartContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<StartContext *>(_localctx)->ntermToken->getText() : "")); 
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      dynamic_cast<StartContext *>(_localctx)->non_terminalContext = non_terminal();

                  _localctx->grammar.add_non_term(dynamic_cast<StartContext *>(_localctx)->non_terminalContext->non_term);
              
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GrammarParser::NTERM);
    setState(24); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(21);
      dynamic_cast<StartContext *>(_localctx)->terminalContext = terminal();

                  _localctx->grammar.add_term(dynamic_cast<StartContext *>(_localctx)->terminalContext->term);
              
      setState(26); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GrammarParser::TERM);
    setState(31);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammarParser::T__6) {
      setState(28);
      dynamic_cast<StartContext *>(_localctx)->skip_symbolsContext = skip_symbols();

                  _localctx->grammar.skip_symbols = dynamic_cast<StartContext *>(_localctx)->skip_symbolsContext->skip_chars;
              
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Non_terminalContext ------------------------------------------------------------------

GrammarParser::Non_terminalContext::Non_terminalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::Non_terminalContext::NTERM() {
  return getToken(GrammarParser::NTERM, 0);
}

std::vector<tree::TerminalNode *> GrammarParser::Non_terminalContext::Attr() {
  return getTokens(GrammarParser::Attr);
}

tree::TerminalNode* GrammarParser::Non_terminalContext::Attr(size_t i) {
  return getToken(GrammarParser::Attr, i);
}

std::vector<GrammarParser::ProductionContext *> GrammarParser::Non_terminalContext::production() {
  return getRuleContexts<GrammarParser::ProductionContext>();
}

GrammarParser::ProductionContext* GrammarParser::Non_terminalContext::production(size_t i) {
  return getRuleContext<GrammarParser::ProductionContext>(i);
}


size_t GrammarParser::Non_terminalContext::getRuleIndex() const {
  return GrammarParser::RuleNon_terminal;
}


GrammarParser::Non_terminalContext* GrammarParser::non_terminal() {
  Non_terminalContext *_localctx = _tracker.createInstance<Non_terminalContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammarParser::RuleNon_terminal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    dynamic_cast<Non_terminalContext *>(_localctx)->ntermToken = match(GrammarParser::NTERM);
    setState(37);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammarParser::T__2) {
      setState(34);
      match(GrammarParser::T__2);
      setState(35);
      dynamic_cast<Non_terminalContext *>(_localctx)->attrToken = match(GrammarParser::Attr);
       _localctx->non_term.arg_list = (dynamic_cast<Non_terminalContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<Non_terminalContext *>(_localctx)->attrToken->getText() : "").substr(1, (dynamic_cast<Non_terminalContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<Non_terminalContext *>(_localctx)->attrToken->getText() : "").length() - 2); 
    }
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammarParser::T__3) {
      setState(39);
      match(GrammarParser::T__3);
      setState(40);
      dynamic_cast<Non_terminalContext *>(_localctx)->attrToken = match(GrammarParser::Attr);
       _localctx->non_term.ret_type = (dynamic_cast<Non_terminalContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<Non_terminalContext *>(_localctx)->attrToken->getText() : "").substr(1, (dynamic_cast<Non_terminalContext *>(_localctx)->attrToken != nullptr ? dynamic_cast<Non_terminalContext *>(_localctx)->attrToken->getText() : "").length() - 2); 
    }
    setState(44);
    match(GrammarParser::T__4);
     _localctx->non_term.name = (dynamic_cast<Non_terminalContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<Non_terminalContext *>(_localctx)->ntermToken->getText() : ""); 
    setState(50); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(46);
      match(GrammarParser::T__5);
      setState(47);
      dynamic_cast<Non_terminalContext *>(_localctx)->productionContext = production();

                      _localctx->non_term.add_rule(dynamic_cast<Non_terminalContext *>(_localctx)->productionContext->rule, dynamic_cast<Non_terminalContext *>(_localctx)->productionContext->code, dynamic_cast<Non_terminalContext *>(_localctx)->productionContext->exp_list);
                  
      setState(52); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GrammarParser::T__5);
    setState(54);
    match(GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProductionContext ------------------------------------------------------------------

GrammarParser::ProductionContext::ProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GrammarParser::ProductionContext::NTERM() {
  return getTokens(GrammarParser::NTERM);
}

tree::TerminalNode* GrammarParser::ProductionContext::NTERM(size_t i) {
  return getToken(GrammarParser::NTERM, i);
}

std::vector<tree::TerminalNode *> GrammarParser::ProductionContext::TERM() {
  return getTokens(GrammarParser::TERM);
}

tree::TerminalNode* GrammarParser::ProductionContext::TERM(size_t i) {
  return getToken(GrammarParser::TERM, i);
}

std::vector<tree::TerminalNode *> GrammarParser::ProductionContext::Code() {
  return getTokens(GrammarParser::Code);
}

tree::TerminalNode* GrammarParser::ProductionContext::Code(size_t i) {
  return getToken(GrammarParser::Code, i);
}


size_t GrammarParser::ProductionContext::getRuleIndex() const {
  return GrammarParser::RuleProduction;
}


GrammarParser::ProductionContext* GrammarParser::production() {
  ProductionContext *_localctx = _tracker.createInstance<ProductionContext>(_ctx, getState());
  enterRule(_localctx, 4, GrammarParser::RuleProduction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::TERM:
      case GrammarParser::NTERM: {
        enterOuterAlt(_localctx, 1);
        setState(64); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(64);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case GrammarParser::NTERM: {
              setState(56);
              dynamic_cast<ProductionContext *>(_localctx)->ntermToken = match(GrammarParser::NTERM);

                                      _localctx->exp_list.push_back("");
                                      _localctx->rule.push_back((dynamic_cast<ProductionContext *>(_localctx)->ntermToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->ntermToken->getText() : ""));
                                   
              setState(60);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
              case 1: {
                setState(58);
                dynamic_cast<ProductionContext *>(_localctx)->codeToken = match(GrammarParser::Code);
                 _localctx->exp_list.back() = (dynamic_cast<ProductionContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->codeToken->getText() : "").substr(1, (dynamic_cast<ProductionContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->codeToken->getText() : "").length() - 2); 
                break;
              }

              }
              break;
            }

            case GrammarParser::TERM: {
              setState(62);
              dynamic_cast<ProductionContext *>(_localctx)->termToken = match(GrammarParser::TERM);

                                      _localctx->exp_list.push_back("");
                                      _localctx->rule.push_back((dynamic_cast<ProductionContext *>(_localctx)->termToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->termToken->getText() : ""));
                                   
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(66); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == GrammarParser::TERM

        || _la == GrammarParser::NTERM);
        setState(70);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::Code) {
          setState(68);
          dynamic_cast<ProductionContext *>(_localctx)->codeToken = match(GrammarParser::Code);
          dynamic_cast<ProductionContext *>(_localctx)->code =  (dynamic_cast<ProductionContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->codeToken->getText() : "").substr(1, (dynamic_cast<ProductionContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->codeToken->getText() : "").length() - 2);
        }
        break;
      }

      case GrammarParser::T__1:
      case GrammarParser::T__5:
      case GrammarParser::Code: {
        enterOuterAlt(_localctx, 2);
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::Code) {
          setState(72);
          dynamic_cast<ProductionContext *>(_localctx)->codeToken = match(GrammarParser::Code);
          dynamic_cast<ProductionContext *>(_localctx)->code =  (dynamic_cast<ProductionContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->codeToken->getText() : "").substr(1, (dynamic_cast<ProductionContext *>(_localctx)->codeToken != nullptr ? dynamic_cast<ProductionContext *>(_localctx)->codeToken->getText() : "").length() - 2);
        }
         _localctx->rule.push_back("#"); 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerminalContext ------------------------------------------------------------------

GrammarParser::TerminalContext::TerminalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::TerminalContext::TERM() {
  return getToken(GrammarParser::TERM, 0);
}

tree::TerminalNode* GrammarParser::TerminalContext::STRING() {
  return getToken(GrammarParser::STRING, 0);
}


size_t GrammarParser::TerminalContext::getRuleIndex() const {
  return GrammarParser::RuleTerminal;
}


GrammarParser::TerminalContext* GrammarParser::terminal() {
  TerminalContext *_localctx = _tracker.createInstance<TerminalContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleTerminal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    dynamic_cast<TerminalContext *>(_localctx)->termToken = match(GrammarParser::TERM);
    setState(80);
    match(GrammarParser::T__4);
    setState(81);
    dynamic_cast<TerminalContext *>(_localctx)->stringToken = match(GrammarParser::STRING);
    setState(82);
    match(GrammarParser::T__1);
     dynamic_cast<TerminalContext *>(_localctx)->term =  Term((dynamic_cast<TerminalContext *>(_localctx)->termToken != nullptr ? dynamic_cast<TerminalContext *>(_localctx)->termToken->getText() : ""), (dynamic_cast<TerminalContext *>(_localctx)->stringToken != nullptr ? dynamic_cast<TerminalContext *>(_localctx)->stringToken->getText() : "")); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Skip_symbolsContext ------------------------------------------------------------------

GrammarParser::Skip_symbolsContext::Skip_symbolsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GrammarParser::Skip_symbolsContext::SYMBOL() {
  return getTokens(GrammarParser::SYMBOL);
}

tree::TerminalNode* GrammarParser::Skip_symbolsContext::SYMBOL(size_t i) {
  return getToken(GrammarParser::SYMBOL, i);
}


size_t GrammarParser::Skip_symbolsContext::getRuleIndex() const {
  return GrammarParser::RuleSkip_symbols;
}


GrammarParser::Skip_symbolsContext* GrammarParser::skip_symbols() {
  Skip_symbolsContext *_localctx = _tracker.createInstance<Skip_symbolsContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleSkip_symbols);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(GrammarParser::T__6);
    setState(88); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(86);
      dynamic_cast<Skip_symbolsContext *>(_localctx)->symbolToken = match(GrammarParser::SYMBOL);
       _localctx->skip_chars.insert(get_char((dynamic_cast<Skip_symbolsContext *>(_localctx)->symbolToken != nullptr ? dynamic_cast<Skip_symbolsContext *>(_localctx)->symbolToken->getText() : "").substr(1, (dynamic_cast<Skip_symbolsContext *>(_localctx)->symbolToken != nullptr ? dynamic_cast<Skip_symbolsContext *>(_localctx)->symbolToken->getText() : "").length()-2))); 
      setState(90); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GrammarParser::SYMBOL);
    setState(92);
    match(GrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> GrammarParser::_decisionToDFA;
atn::PredictionContextCache GrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GrammarParser::_atn;
std::vector<uint16_t> GrammarParser::_serializedATN;

std::vector<std::string> GrammarParser::_ruleNames = {
  "start", "non_terminal", "production", "terminal", "skip_symbols"
};

std::vector<std::string> GrammarParser::_literalNames = {
  "", "'\u270B:'", "';'", "'\U0001F913'", "'\U0001F92F'", "':'", "'\U0001F914'", 
  "'\U0001F449:'"
};

std::vector<std::string> GrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "TERM", "NTERM", "Attr", "STRING", "SYMBOL", 
  "Code", "WS"
};

dfa::Vocabulary GrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GrammarParser::_tokenNames;

GrammarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x10, 0x61, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x14, 0xa, 0x2, 
    0xd, 0x2, 0xe, 0x2, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x1b, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x1c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x22, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x28, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 
    0x35, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x36, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x6, 0x4, 0x43, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x44, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x49, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4d, 0xa, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x50, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 
    0x5b, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x5c, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x2, 0x2, 0x68, 0x2, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x23, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x51, 0x3, 0x2, 0x2, 0x2, 0xa, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0xd, 0x7, 0x3, 0x2, 0x2, 0xd, 0xe, 0x7, 0xb, 0x2, 0x2, 0xe, 0xf, 
    0x7, 0x4, 0x2, 0x2, 0xf, 0x13, 0x8, 0x2, 0x1, 0x2, 0x10, 0x11, 0x5, 
    0x4, 0x3, 0x2, 0x11, 0x12, 0x8, 0x2, 0x1, 0x2, 0x12, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x13, 0x10, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x5, 0x8, 0x5, 0x2, 0x18, 
    0x19, 0x8, 0x2, 0x1, 0x2, 0x19, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1f, 0x5, 0xa, 0x6, 0x2, 0x1f, 0x20, 0x8, 0x2, 0x1, 
    0x2, 0x20, 0x22, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x3, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x27, 0x7, 0xb, 0x2, 0x2, 0x24, 0x25, 0x7, 0x5, 0x2, 0x2, 0x25, 0x26, 
    0x7, 0xc, 0x2, 0x2, 0x26, 0x28, 0x8, 0x3, 0x1, 0x2, 0x27, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2c, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x7, 0x6, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0xc, 0x2, 
    0x2, 0x2b, 0x2d, 0x8, 0x3, 0x1, 0x2, 0x2c, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x7, 0x7, 0x2, 0x2, 0x2f, 0x34, 0x8, 0x3, 0x1, 0x2, 0x30, 0x31, 
    0x7, 0x8, 0x2, 0x2, 0x31, 0x32, 0x5, 0x6, 0x4, 0x2, 0x32, 0x33, 0x8, 
    0x3, 0x1, 0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x39, 0x7, 0x4, 0x2, 0x2, 0x39, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x3b, 0x7, 0xb, 0x2, 0x2, 0x3b, 0x3e, 0x8, 0x4, 0x1, 0x2, 0x3c, 0x3d, 
    0x7, 0xf, 0x2, 0x2, 0x3d, 0x3f, 0x8, 0x4, 0x1, 0x2, 0x3e, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x7, 0xa, 0x2, 0x2, 0x41, 0x43, 0x8, 0x4, 0x1, 
    0x2, 0x42, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 
    0x7, 0xf, 0x2, 0x2, 0x47, 0x49, 0x8, 0x4, 0x1, 0x2, 0x48, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4b, 0x7, 0xf, 0x2, 0x2, 0x4b, 0x4d, 0x8, 0x4, 0x1, 
    0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x8, 0x4, 0x1, 0x2, 0x4f, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0xa, 0x2, 0x2, 0x52, 0x53, 0x7, 
    0x7, 0x2, 0x2, 0x53, 0x54, 0x7, 0xd, 0x2, 0x2, 0x54, 0x55, 0x7, 0x4, 
    0x2, 0x2, 0x55, 0x56, 0x8, 0x5, 0x1, 0x2, 0x56, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x5a, 0x7, 0x9, 0x2, 0x2, 0x58, 0x59, 0x7, 0xe, 0x2, 0x2, 
    0x59, 0x5b, 0x8, 0x6, 0x1, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0x4, 0x2, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0xf, 0x15, 0x1c, 0x21, 
    0x27, 0x2c, 0x36, 0x3e, 0x42, 0x44, 0x48, 0x4c, 0x4f, 0x5c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GrammarParser::Initializer GrammarParser::_init;
