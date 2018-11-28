#include <iostream>
#include <istream>
#include <cstdio>
#include "Token.h"
#include "Tree.h"
#include "lexical_analyser.h"

class Parser {
    LexicalAnalyser lex;

public:
    Parser(std::istream &istr) : lex(istr) {}

    Tree parse() {
        lex.next_token();
        return Z();
    }

private: 
    Tree Z() {
        switch (lex.cur_token) {
            case NOT:
            case TERM:
            case LEFT: {
                //// X
                Tree sub = X();
                //// Z'
                Tree cont = ZP();
                return Tree("Z", {sub, cont});
            }
            default: {
                throw std::string(std::string("Something went wrong here: ") +
                                  static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
            }
        }
    }

    Tree ZP() {        
        switch (lex.cur_token) {
            case OR: {
                std::string tkn = "|";
                lex.next_token();
                //// X
                Tree sub = X();
                //// Z'
                Tree cont = ZP();
                return Tree("Z'", {Tree(tkn), sub, cont});
            }
            case XOR: {
                std::string tkn = "^";
                lex.next_token();
                //// X
                Tree sub = X();
                //// Z'
                Tree cont = ZP();
                return Tree("Z'", {Tree(tkn), sub, cont});
        }
            case RIGHT: 
            case END: {
                //// eps
                return Tree("Z'", {}); // empty tree???
            }
            default: {
                throw std::string(std::string("Something went wrong here: ") +
                                  static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
            }
        }
    }

    Tree X() {
        switch (lex.cur_token) {
            case NOT:
            case TERM:
            case LEFT: {
//                //// W
//                Tree sub = W();
                //// Y
                Tree sub = Y();
                //// X'
                Tree cont = XP();
                return Tree("X", {sub, cont});
            }
            default: {
                throw std::string(std::string("Something went wrong here: ") +
                                  static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
            }
        }
    }

    Tree XP() {
        switch (lex.cur_token) {
            case AND: {
                std::string tkn = "&";
                lex.next_token();
//                //// W
//                Tree sub = W();
                //// Y
                Tree sub = Y();
                //// X'
                Tree cont = XP();
                return Tree("X'", {Tree(tkn), sub, cont});
            }
            case OR:
            case XOR:
            case RIGHT: 
            case END: {
                //// eps
                return Tree("X'", {});
            }
            default: {
                throw std::string(std::string("Something went wrong here: ") +
                                  static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
            }
        }
    }

    Tree Y() {
        switch (lex.cur_token) {
            case NOT: {
                std::string tkn = "!";
                lex.next_token();
                //// W
                Tree sub = W();
                return Tree("Y", {Tree(tkn), sub});
            }
            case TERM:
            case LEFT: {
                //// W
                Tree sub = W();
                return Tree("Y", {sub});
//                return Tree("Y", {Tree("!"), sub});
            }
            default: {
                throw std::string(std::string("Something went wrong here: ") +
                                  static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
            }
        }
    }

    Tree W() {
        switch (lex.cur_token) {
            case TERM: {
                std::string tkn;
                tkn += lex.get_cur_term();
                lex.next_token();
                return Tree("W", {Tree(tkn)});
            }
            case LEFT: {
                lex.next_token();
                //// Z
                Tree sub = Z();
                if (lex.cur_token != RIGHT) {
                    throw std::string(std::string(") expected ") +
                                      static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
                }
                lex.next_token(); // added
                return Tree("W", {Tree("("), sub, Tree(")")});
            }
            default: {
                throw std::string(std::string("Something went wrong here: ") +
                                  static_cast<char>(lex.cur_char) + " at position ", lex.cur_pos);
            }
        }
    }
};