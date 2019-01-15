#include <iostream>
#include <fstream>
#include <regex>

#include "antlr4-runtime.h"
#include "GrammarLexer.h"
#include "GrammarParser.h"
#include "Grammar.h"

#include "gen/Parser.h"
#include "gen/Lexer.h"
#include "gen/Tree.h"

using namespace antlr4;

int main() {
    std::ifstream in("../examples/em_calculator.gr");

    ANTLRInputStream input(in);
    GrammarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    GrammarParser parser(&tokens);
    Grammar res = parser.start()->grammar;
    res.gen_code();
    res.print();

    return 0;
}