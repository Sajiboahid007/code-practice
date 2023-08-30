#include <iostream>
#include <set>

int main() {
    std::set<int> bst;

    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);

    std::cout << "Search 4: " << (bst.count(4) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search 6: " << (bst.count(6) ? "Found" : "Not Found") << std::endl;
      // Inorder Traversal
    std::cout << "Inorder Traversal: ";
    for (int element : bst) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}

