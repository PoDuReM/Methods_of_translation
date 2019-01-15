#include "Parser.h"
#include <memory>
#include <iostream>

using std::unique_ptr;
using std::string;

result<int> Parser::parse(const string &__str) {
    lexer = Lexer(__str);
    result<int> root = add_sub();
    if (lexer.get_cur_tok() == END$) {
        return root;
    }
    parser_error();
}

result<int> Parser::add_sub() {
    result<int> res;
    node_t root(new Node("add_sub"));
    int $val = res.val;
    switch (lexer.get_cur_tok()) {
        case NUM: {
            auto $atom = atom();
            root->append_child(std::move($atom.node));
            auto $add_sub_cont = add_sub_cont(0);
            root->append_child(std::move($add_sub_cont.node));
            $val = $atom.val + $add_sub_cont.val; 
            break;
        }
        case OPEN: {
            auto $atom = atom();
            root->append_child(std::move($atom.node));
            auto $add_sub_cont = add_sub_cont(0);
            root->append_child(std::move($add_sub_cont.node));
            $val = $atom.val + $add_sub_cont.val; 
            break;
        }
        default: {
            parser_error();
        }
    }
    res.node = std::move(root);
    res.val = $val;
    return res;
}


result<int> Parser::add_sub_cont(int a) {
    result<int> res;
    node_t root(new Node("add_sub_cont"));
    int $val = res.val;
    switch (lexer.get_cur_tok()) {
        case SUB: {
            auto $SUB = term_symbol(lexer.get_cur_tok_text());
            root->append_child(std::move($SUB.node));
            auto $atom = atom();
            root->append_child(std::move($atom.node));
            auto $add_sub_cont = add_sub_cont(a + 1);
            root->append_child(std::move($add_sub_cont.node));
            $val = -$atom.val + $add_sub_cont.val; std::cout << a << std::endl; 
            break;
        }
        case ADD: {
            auto $ADD = term_symbol(lexer.get_cur_tok_text());
            root->append_child(std::move($ADD.node));
            auto $atom = atom();
            root->append_child(std::move($atom.node));
            auto $add_sub_cont = add_sub_cont(a + 1);
            root->append_child(std::move($add_sub_cont.node));
            $val = $atom.val + $add_sub_cont.val; std::cout << a << std::endl; 
            break;
        }
        case CLOSE:
        case END$:
        {
            root->append_child(eps_symbol());
            $val = 0; std::cout << a << std::endl; 
            break;
        }
        default: {
            parser_error();
        }
    }
    res.node = std::move(root);
    res.val = $val;
    return res;
}


result<int> Parser::atom() {
    result<int> res;
    node_t root(new Node("atom"));
    int $val = res.val;
    switch (lexer.get_cur_tok()) {
        case NUM: {
            auto $NUM = term_symbol(lexer.get_cur_tok_text());
            root->append_child(std::move($NUM.node));
            $val = std::stoi($NUM.val); 
            break;
        }
        case OPEN: {
            auto $OPEN = term_symbol(lexer.get_cur_tok_text());
            root->append_child(std::move($OPEN.node));
            auto $add_sub = add_sub();
            root->append_child(std::move($add_sub.node));
            auto $CLOSE = term_symbol(lexer.get_cur_tok_text());
            root->append_child(std::move($CLOSE.node));
            $val = $add_sub.val; 
            break;
        }
        default: {
            parser_error();
        }
    }
    res.node = std::move(root);
    res.val = $val;
    return res;
}


result<std::string> Parser::term_symbol(string const & s) {
    result<std::string> res;
    node_t node(new Node(s));
    lexer.next_token();
    res.node = std::move(node);
    res.val = s;
    return res;
}

node_t Parser::eps_symbol() {
    return node_t(new Node(""));
}

void Parser::parser_error() {
    size_t pos = lexer.get_cur_pos();
    char buf[50];
    sprintf(buf, "Unexpected token: %s at position: %zu", lexer.get_cur_tok_text().c_str(), pos);
    throw parser_exception(buf);
}

parser_exception::parser_exception(const string & s) : message(s) {}

const char *parser_exception::what() const noexcept {
    return message.c_str();
}
