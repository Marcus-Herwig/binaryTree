class Node
{
    private:
        int payload;
        Node* leftChild;
        Node* rightChild;

        
    
    public:
        Node(int payload);
        void setLeftChild(Node* n);
        void setRightChild(Node* n);
        int getPayload();
        Node* getRightChild();
        Node* getLeftChild();
        void setNextChild(Node* self, Node* child);
        
};