#include "node.hpp";
class BinaryTree
{
    private:
        Node* root;
        BinaryTree* tree;
    public:
        BinaryTree(Node* n);
        Node* insert(Node* node2add, Node* start);
        void inOrder(Node* n);    
};