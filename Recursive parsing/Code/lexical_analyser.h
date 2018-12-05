#include <iostream>
#include "Token.h"

class LexicalAnalyser {
public:
    std::istream &is;
    char cur_char, last_char;
    int cur_pos, last_pos;
    char cur_term;

    LexicalAnalyser(std::istream &istr) : is(istr) {
        cur_pos = 0;
        cur_char = (char) is.get();
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
        cur_char = (char)is.get();
    }

    void skip_blank() {
        while (is_blank(cur_char)) {
            next_char();
        }
    }

    Token get_cur_token() { return cur_token; }

    size_t get_cur_pos() { return cur_pos; }

    char get_cur_char() { return cur_char; }

    char get_cur_term() { return cur_term; }

    Token cur_token;

    void next_token() {
//        next_char();
        skip_blank();
        last_char = cur_char;
        last_pos = cur_pos;
        switch (cur_char) {
            case '(':
                next_char();
                skip_blank();
                cur_token = LEFT;
                break;
            case ')':
                next_char();
                skip_blank();
                cur_token = RIGHT;
                break;
            case '&':
                next_char();
                skip_blank();
                cur_token = AND;
                break;
            case '|':
                next_char();
                skip_blank();
                cur_token = OR;
                break;
            case '^':
                next_char();
                skip_blank();
                cur_token = XOR;
                break;
            case '!':
                next_char();
                skip_blank();
                cur_token = NOT;
                break;
            case -1:
                cur_token = END;
                break;
            default: {
                if (cur_char >= 'a' && cur_char <= 'z') {
                    cur_term = cur_char;
                    next_char();
                    skip_blank();
                    cur_token = TERM;
                    break;
                } else
                    throw std::runtime_error(std::string("Illegal character ") + std::string(1, get_cur_char()) + " at position " +
                            std::to_string(cur_pos) + " while input.");
            }
        }
    }
};