// Построить двоичное дерево поиска из букв вводимой строки. Вывести его
// на экран. Определить все гласные буквы и их количество. Удалить из дерева
// эти буквы. Вывести оставшиеся элементы дерева. Сравнить время удаления
// гласных букв из дерева и из строки. Вывести на экран всю необходимую
// информацию с комментариями.

#include <iostream>
#include <cstdio>
#include <cstring>
#include <exception>
#include <chrono>

#define COUNT 10

struct Node {
private:
    char data;
    struct Node *left;
    struct Node *right;

    //print tree
    [[maybe_unused]] static void print2D(struct Node *, int);

    //min node in a branch
    [[maybe_unused]] static struct Node *minNodeBranch(struct Node *);

public:
    //constructor
    [[maybe_unused]] explicit Node(char);

    //add Node
    [[maybe_unused]] static void addNode(char, struct Node **);

    //wrapper over print tree
    [[maybe_unused]] static void print(struct Node *);

    //search
    [[maybe_unused]] static struct Node *search(struct Node *, char);

    //getter
    [[maybe_unused]] static char getData(struct Node *);

    //delete node
    [[maybe_unused]] static struct Node *deleteNode(struct Node *, char);
};

//constructor
Node::Node(char letter) : data(letter), left(nullptr), right(nullptr) {}

//add Node
[[maybe_unused]] void Node::addNode(char value, struct Node **root) {
    struct Node *tempNode = *root;
    bool flagr = false;
    bool samel = false;
    while (true) {
        if (tempNode->data < value) {
            if (tempNode->right == nullptr) {
                flagr = true;
                break;
            } else {
                tempNode = tempNode->right;
            }
        } else if (tempNode->data > value) {
            if (tempNode->left == nullptr) {
                break;
            } else {
                tempNode = tempNode->left;
            }
        } else {
            samel = true;
            break;
        }
    }
    if (!samel) {
        struct Node *newNode = new Node(value);
        flagr ? (tempNode)->right = newNode : (tempNode)->left = newNode;
    }
}

//print tree
[[maybe_unused]] void Node::print2D(struct Node *root, int space) {
    if (root == nullptr)
        return;

    space += COUNT;

    print2D(root->right, space);

    std::cout << std::endl;
    for (int i = COUNT; i < space; i++)
        std::cout << " ";
    std::cout << root->data << "\n";

    print2D(root->left, space);
}

//wrapper over print tree
[[maybe_unused]] void Node::print(struct Node *root) {
    print2D(root, 0);
}

//search
[[maybe_unused]] struct Node *Node::search(struct Node *root, char letter) {
    if (root == nullptr or root->data == letter) {
        return root;
    }

    if (root->data < letter) {
        return search(root->right, letter);
    }

    return search(root->left, letter);
}

//getter
[[maybe_unused]] char Node::getData(struct Node *node) {
    return node->data;
}

//min node in a branch
[[maybe_unused]] struct Node *Node::minNodeBranch(struct Node *node) {
    struct Node *curr = node;

    while (curr and curr->left != nullptr) {
        curr = curr->left;
    }
    return curr;
}

//delete node
[[maybe_unused]] struct Node *Node::deleteNode(struct Node *root, char letter) {
    if (root == nullptr) {
        return root;
    }

    if (letter < root->data) {
        root->left = deleteNode(root->left, letter);
    } else if (letter > root->data) {
        root->right = deleteNode(root->right, letter);
    } else {
        if (root->left == nullptr and root->right == nullptr) {
            return nullptr;
        } else if (root->left == nullptr) {
            struct Node *temp = root->right;
            //Корень нельзя удалять, только менять значение, иначе все ломается - > ab error
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            struct Node *temp = root->left;
            //Корень нельзя удалять, только менять значение, иначе все ломается - > aF error
            delete root;
            return temp;
        }
        struct Node *temp = minNodeBranch(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void deleteLetterFromString(char string[], char letter) {
    size_t k = 0;
    for (size_t i = 0; string[i]; i++) {
        string[i] = string[i + k];
        if (string[i] == letter) {
            k++;
            i--;
        }
    }
}

int main() {
    std::cout << "Enter string:\n";
    char string[1000];
    gets(string);
    std::cout << "\nYour string:\n" << string << std::endl;

    size_t len = strlen(string);

    if (len == 0) {
        std::cout << "\nString can't be empty\n";
        return 0;
    }

    struct Node *root = new Node(string[0]);
    for (size_t i = 1; i < strlen(string); ++i) {
        Node::addNode(string[i], &root);
    }

    std::cout << "\nTree, based on your string with each letter being unique (ASCII):\n";
    Node::print(root);

    char vowelsInTree[11];
    char allvowels[11] = "AEIOUaeiou";
    int c = 0;
    for (size_t i = 0; i < strlen(allvowels); ++i) {
        if (Node::search(root, allvowels[i]) != nullptr) {
            vowelsInTree[c] = allvowels[i];
            c++;
        }
    }

    if (c != 0) {
        std::cout << "\nAll the vowels in a tree (considering that 'y/Y' is not a vowel):\n";
        for (size_t i = 0; i < c; ++i) {
            std::cout << vowelsInTree[i] << ' ';
        }
        std::cout << std::endl;
        std::cout << "Amount = " << c << std::endl;
    } else {
        std::cout << "\nThere are no vowels in a tree\n";
        return 0;
    }

    auto start1 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < c; ++i) {
        Node::deleteNode(root, vowelsInTree[i]);
    }
    auto stop1 = std::chrono::high_resolution_clock::now();
    auto durationTREE = duration_cast<std::chrono::microseconds>(stop1 - start1);
    std::cout << std::endl;

    std::cout << "Tree based on your string after deleting all the vowels:\n";
    Node::print(root);

    std::cout << "\nNow deleting vowels:\n";
    for (size_t i = 0; i < c; ++i) {
        std::cout << vowelsInTree[i] << ' ';
    }
    std::cout << "(Amount = " << c << ")" << std::endl << "From a string:\n" << string << std::endl;
    auto start2 = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < c; ++i) {
        deleteLetterFromString(string, vowelsInTree[i]);
    }
    auto stop2 = std::chrono::high_resolution_clock::now();
    auto durationSTRING = duration_cast<std::chrono::microseconds>(stop2 - start2);
    std::cout << "String after deleting vowels:\n" << string << std::endl;

    std::cout << "\nTime for deleting vowels:\n" << "In a tree: " << durationTREE.count() << " microseconds\n" << "In a string: " << durationSTRING.count() << " microseconds\n";
    return 0;
}
