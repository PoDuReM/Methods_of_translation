
// Generated from Grammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include "Grammar.h"
#include "Unit.h"
#include "NonTerm.h"
#include "Term.h"


class  GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    TERM = 8, NTERM = 9, Attr = 10, STRING = 11, SYMBOL = 12, Code = 13, 
    WS = 14
  };

  enum {
    RuleStart = 0, RuleNon_terminal = 1, RuleProduction = 2, RuleTerminal = 3, 
    RuleSkip_symbols = 4
  };

  GrammarParser(antlr4::TokenStream *input);
  ~GrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  char escape(char c) {
      switch(c) {
          case 'n':
              return '\n';
          case 't':
              return '\t';
          case 'r':
              return '\r';
          case '\\':
              return '\\';
          case 'b':
              return '\b';
          case 'a':
              return '\a';
          case 'f':
              return '\f';
          case 'v':
              return '\v';
          default:
              assert(false && "Unknown escape sequence");
      }
  }

  char get_char(const std::string& s) {
      if (s.length() == 1)
          return s[0];
      return escape(s[1]);
  }


  class StartContext;
  class Non_terminalContext;
  class ProductionContext;
  class TerminalContext;
  class Skip_symbolsContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    Grammar grammar;
    antlr4::Token *ntermToken = nullptr;;
    GrammarParser::Non_terminalContext *non_terminalContext = nullptr;;
    GrammarParser::TerminalContext *terminalContext = nullptr;;
    GrammarParser::Skip_symbolsContext *skip_symbolsContext = nullptr;;
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NTERM();
    std::vector<Non_terminalContext *> non_terminal();
    Non_terminalContext* non_terminal(size_t i);
    std::vector<TerminalContext *> terminal();
    TerminalContext* terminal(size_t i);
    Skip_symbolsContext *skip_symbols();

   
  };

  StartContext* start();

  class  Non_terminalContext : public antlr4::ParserRuleContext {
  public:
    NonTerm non_term;
    antlr4::Token *ntermToken = nullptr;;
    antlr4::Token *attrToken = nullptr;;
    GrammarParser::ProductionContext *productionContext = nullptr;;
    Non_terminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NTERM();
    std::vector<antlr4::tree::TerminalNode *> Attr();
    antlr4::tree::TerminalNode* Attr(size_t i);
    std::vector<ProductionContext *> production();
    ProductionContext* production(size_t i);

   
  };

  Non_terminalContext* non_terminal();

  class  ProductionContext : public antlr4::ParserRuleContext {
  public:
    Rule rule;
    std::string code;
    std::vector<std::string> exp_list;
    antlr4::Token *ntermToken = nullptr;;
    antlr4::Token *codeToken = nullptr;;
    antlr4::Token *termToken = nullptr;;
    ProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NTERM();
    antlr4::tree::TerminalNode* NTERM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TERM();
    antlr4::tree::TerminalNode* TERM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Code();
    antlr4::tree::TerminalNode* Code(size_t i);

   
  };

  ProductionContext* production();

  class  TerminalContext : public antlr4::ParserRuleContext {
  public:
    Term term;
    antlr4::Token *termToken = nullptr;;
    antlr4::Token *stringToken = nullptr;;
    TerminalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TERM();
    antlr4::tree::TerminalNode *STRING();

   
  };

  TerminalContext* terminal();

  class  Skip_symbolsContext : public antlr4::ParserRuleContext {
  public:
    std::unordered_set<char> skip_chars;
    antlr4::Token *symbolToken = nullptr;;
    Skip_symbolsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SYMBOL();
    antlr4::tree::TerminalNode* SYMBOL(size_t i);

   
  };

  Skip_symbolsContext* skip_symbols();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

