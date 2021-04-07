#include <iostream>
#include <string>

#include "binaryTree.hpp"

using namespace std;


int main(int argc, char** argv)
{
    Node* root = new Node(5);
    BinaryTree* tree = new BinaryTree(root);
    Node* node1 = new Node(2);
    Node* node2 = new Node(7);
    Node* node3 = new Node(9);
    Node* node4 = new Node(3);
    Node* node5 = new Node(4);
    tree->insert(node1,root);
    tree->insert(node2,root);
    tree->insert(node3,root);
    tree->insert(node4,root);
    tree->insert(node5,root);
    tree->inOrder(root);


}
