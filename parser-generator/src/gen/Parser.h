#pragma once

#include "Lexer.h"
#include "Tree.h"

template <typename T>
struct result {
    node_t node;
    T val;
    result() = default;
};
class Parser {
public:
    Parser() = default;
    result<int> parse(const std::string & s);
private:
    Lexer lexer;
    result<int> add_sub();
    result<int> fact_cont(int x);
    result<int> add_sub_cont(int a);
    result<int> fact();
    result<int> atom();
    result<std::string> term_symbol(std::string const & s);
    node_t eps_symbol();
    void parser_error();
};

class parser_exception : public std::exception {
    std::string message;
public:
    explicit parser_exception(const std::string &);
    virtual const char* what() const noexcept override;
};