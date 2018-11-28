#include <iostream>
#include <cstring>
#include "parser.h"

int main() {
    freopen("input.txt", "r", stdin);
//    Parser a(std::cin);
    Parser(std::cin).parse().visualise(0);

    return 0;
}