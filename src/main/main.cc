#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::vector<int> input = {10, 20, 2, 0, -8, -6, 41, -9, 5, 15, 4, 7, 22};
    BST *tree = new BST(input);
    std::vector <int> output = tree->LevelOrder();
    for (auto &n : output)
        std::cout << n << " ";
    std::cout << std::endl;

    std::cout << "Height of the tree is : " << tree->findHeight() << std::endl;
    return EXIT_SUCCESS;
}