#include <string>
#include <vector>

class Tree {
    std::string node;
    std::vector <Tree> children;

    Tree (std::string node, std::vector <Tree> children) {
        this.node = node;
        this.children = children;
    }

    Tree (std::string node) {
        this.node = node;
    }
};