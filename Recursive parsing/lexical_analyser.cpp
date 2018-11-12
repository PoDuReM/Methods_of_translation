#include <iostream>
#include <istream>
#include <cstdio>
#include "Token.h"

class LexicalAnalyser {
    std::istream is;
    int cur_char;
    int cur_pos;
    Token cur_token;

    LexicalAnalyser (std::istream istr) {
        is = istr;
        cur_pos = 0;
        cur_char = is.get();
    }

    bool is_blank (int c) {
        return c == ' ' || c == '\r' || c == '\n';
    }

    void next_char() {
        ++cur_pos;
        cur_char = is.get();
    }

    void next_token () {
        while (is_blank(cur_char)) {
            next_char();
        }
        switch (cur_char) {
            case '(': {
                next_char();
                cur_token = Token.LEFT;
                break;
            }
            case ')': {
                next_char();
                cur_token = Token.RIGHT;
                break;
            }
            case '&': {
                next_char();
                cur_token = Token.AND;
                break;
            }
            case '|': {
                next_char();
                cur_token = Token.OR;
                break;
            }
            case '^': {
                next_char();
                cur_token = Token.XOR;
                break;
            }
            case -1: {
                cur_token = Token.END
                // break;
            }
            default: 
                throw "PARSING FAIL";
        }
    }

    Token get_cur_token () {
        return cur_token;
    }

    int get_cur_pos () {
        return cur_pos;
    }
};

int main() {


    return 0;
}