#include <iostream>
#include <istream>
#include <cstdio>
#include "Token.h"
#include "Tree.h"
#include "lexical_analyser.h"

class Parser {
    LexicalAnalyser lex;

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
                if (lex.get_cur_char() == -1) {
                    throw std::runtime_error(std::string("EOF found. Expected n, ! or (."));
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected n, ! or (.");
                }
            }
        }
    }

    Tree ZP() {
        switch (lex.cur_token) {
            case OR: {
                std::string tkn;
                if (lex.cur_token == OR) {
                    tkn = "|";
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                                    std::to_string(lex.last_pos) + ". Expected |.");
                }
                lex.next_token();
                //// X
                Tree sub = X();
                //// Z'
                Tree cont = ZP();
                return Tree("Z'", {Tree(tkn), sub, cont});
            }
            case XOR: {
                std::string tkn;
                if (lex.cur_token == XOR) {
                    tkn = "^";
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected ^.");
                }
                lex.next_token();
                //// X
                Tree sub = X();
                //// Z'
                Tree cont = ZP();
                return Tree("Z'", {Tree(tkn), sub, cont});
            }
            case RIGHT:
            case END: {
                //// epsilon
                return Tree("Z'", {Tree("ε")});
            }
            default: {
                throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                         std::to_string(lex.last_pos) + ". Expected |, ^ or ).");
            }
        }
    }

    Tree X() {
        switch (lex.cur_token) {
            case NOT:
            case TERM:
            case LEFT: {
                //// Y
                Tree sub = Y();
                //// X'
                Tree cont = XP();
                return Tree("X", {sub, cont});
            }
            default: {
                if (lex.get_cur_token() == END) {
                    throw std::runtime_error(std::string("EOF found. Expected n, ! or (."));
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected n, ! or (.");
                }
            }
        }
    }

    Tree XP() {
        switch (lex.cur_token) {
            case AND: {
                std::string tkn;
                if (lex.cur_token == AND) {
                    tkn = "&";
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected &.");
                }
                lex.next_token();
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
                //// epsilon
                return Tree("X'", {Tree("ε")});
            }
            default: {
                throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                         std::to_string(lex.last_pos) + ". Expected &, |, ^, ).");
            }
        }
    }

    Tree Y() {
        switch (lex.cur_token) {
            case NOT: {
                std::string tkn;
                if (lex.cur_token == NOT) {
                    tkn = "!";
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected !.");
                }
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
            }
            default: {
                if (lex.get_cur_token() == END) {
                    throw std::runtime_error(std::string("EOF found. Expected n, ! or (."));
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected n, ! or (.");
                }
            }
        }
    }

    Tree W() {
        switch (lex.cur_token) {
            case TERM: {
                std::string tkn;
                if (lex.cur_token == TERM) {
                    tkn += lex.get_cur_term();
                } else {
                    throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                             std::to_string(lex.last_pos) + ". Expected n.");
                }
                lex.next_token();
                return Tree("W", {Tree(tkn)});
            }
            case LEFT: {
                lex.next_token();
                //// Z
                Tree sub = Z();
                if (lex.cur_token != RIGHT) {
                    throw std::runtime_error(std::string(") expected ") +
                                      std::to_string(lex.last_char) + " at position " + std::to_string(lex.last_pos));
                }
                lex.next_token();
                return Tree("W", {Tree("("), sub, Tree(")")});
            }
            default: {
                throw std::runtime_error(std::string("Illegal character ") + lex.last_char + " at position " +
                                         std::to_string(lex.last_pos) + ". Expected n or ! or expression in brackets.");
            }
        }
    }

public:
    Parser(std::istream &istr) : lex(istr) {}

    Tree parse() {
        lex.next_token();
        Tree pt = Z();
        if (lex.cur_token != END) {
            throw std::runtime_error(std::string("Illegal character ") +
                                     lex.last_char + " at position " + std::to_string(lex.last_pos) + ". Expected EOF.");
        }
        return pt;
    }
};