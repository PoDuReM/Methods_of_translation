#include <string>
#include <iostream>
#include <vector>

struct Tree {
    std::string node;
    std::vector<Tree> children;

    Tree(std::string node, std::vector<Tree> children) : node(node), children(children) {}

    Tree(std::string node) : node(node) {}

    int it = -1;

    void print_tkn(std::string s) {
        if (s.length() == 1) {
            std::cout << s << "   ";
        } else {
            std::cout << s << "  ";
        }
    }

    void visualise(int tab) {
        if (children.empty()) {
            print_tkn(node);
            return;
        }
        print_tkn(node);
        for (size_t i = 0; i < children.size(); ++i) {
            if (children[i].children.size() < 3) {
                children[i].visualise(++tab);
            } else {
                children[i].visualise(tab);
            }
            std::cout << std::endl;
            for (size_t j = 0; j < tab; ++j) {
                std::cout << "    ";
            }
        }
    }
};