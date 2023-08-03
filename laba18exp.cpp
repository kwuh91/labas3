/*
#include <iostream>

struct Node{
private:
    int data;
    struct Node *left;
    struct Node *right;
public:
    //constructor
    [[maybe_unused]] explicit Node(int);

    //Initialize root
    //[[maybe_unused]] static void createRoot(int, struct Node**);

    //getter
    [[maybe_unused]] static int getData(struct Node* node){
        return node->data;
    }

    //print
    [[maybe_unused]] static void printing(struct Node* root){
        std::cout << "root: " << root->data << std::endl;
        std::cout << "left: " << (root->left)->data << std::endl;
        std::cout << "right: " << (root->right)->data << std::endl;
        std::cout << "right left: " << ((root->right)->left)->data << std::endl;
    }

    //add Node
    [[maybe_unused]] static void addNode(int, struct Node**);
};

//constructor
Node::Node(int value) : data(value), left(nullptr), right(nullptr){}

//Initialize root
//[[maybe_unused]] static void createRoot(int value, struct Node** root){
//    (*root)->data = value;
//}

//add Node
[[maybe_unused]] void Node::addNode(int value, struct Node** root){
    struct Node* tempNode = *root;
    bool flagr = false;
    //bool flagl = false;
    while (true){
        if (tempNode->data < value){
            if (tempNode->right == nullptr){
                flagr = true;
                break;
            } else {
                tempNode = tempNode->right;
            }
        } else if (tempNode->data > value){
            if (tempNode->left == nullptr){
                //flagl = true;
                break;
            } else {
                tempNode = tempNode->left;
            }
        }
    }
    struct Node *newNode = new Node(value);
    //newNode->data = value;
    flagr ? (tempNode)->right = newNode : (tempNode)->left = newNode;
    //if (flagr){
    //    (tempNode)->right = newNode;
    //}
    //if (flagl){
    //    (tempNode)->left = newNode;
    //}
}

int main(){
    struct Node *root = new Node(1);
    Node::addNode(5,&root);
    Node::addNode(3,&root);
    Node::addNode(-1,&root);
    Node::printing(root);
    return 0;
}
 */