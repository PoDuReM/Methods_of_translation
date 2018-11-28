#include <iostream>
#include "Token.h"

class LexicalAnalyser {
public:
    std::istream &is;
    int cur_char;
    int cur_pos;
    char cur_term;

    LexicalAnalyser(std::istream &istr) : is(istr) {
        cur_pos = 0;
        cur_char = is.get();
    }

    bool is_blank(int c) {
        return std::isspace(static_cast<unsigned char>(c));
    }

    void next_char() {
        if (is.peek() == EOF) {
            cur_char = -1;
            return;
        }
        ++cur_pos;
        cur_char = is.get();
    }

    Token get_cur_token() { return cur_token; }

    size_t get_cur_pos() { return cur_pos; }

    char get_cur_term() {return cur_term; }

    Token cur_token;

    void next_token() {
        while (is_blank(cur_char)) {
            next_char();
        }

        switch (cur_char) {
            case '(':
                next_char();
                cur_token = Token::LEFT;
                break;
            case ')':
                next_char();
                cur_token = Token::RIGHT;
                break;
            case '&':
                next_char();
                cur_token = Token::AND;
                break;
            case '|':
                next_char();
                cur_token = Token::OR;
                break;
            case '^':
                next_char();
                cur_token = Token::XOR;
                break;
            case '!':
                next_char();
                cur_token = Token::NOT;
                break;
            case -1:
                cur_token = Token::END;
                break;
            default: {
                if (cur_char >= 'a' && cur_char <= 'z') {
                    cur_term = (char) cur_char;
                    next_char();
                    cur_token = Token::TERM;
                    break;
                } else
                    throw std::string(std::string("Illegal character ") + static_cast<char>(cur_char) + " at position " + static_cast<char>(cur_pos));
            }
        }
    }
};