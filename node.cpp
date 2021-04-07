#include "node.hpp"
#include <stdlib.h>

Node::Node(int payload)
{
    this->payload = payload;
    this->leftChild = NULL;
    this->rightChild = NULL;
}

       
int Node::getPayload()
{
    return this->payload;
}

void Node::setLeftChild(Node* n)
{
    this->leftChild = n;
}

void Node::setRightChild(Node* n)
{
    this->rightChild = n;
}

Node* Node::getRightChild()
{
    return this->rightChild;
}
Node* Node::getLeftChild()
{
    return this->leftChild;
}

void Node::setNextChild(Node* self, Node* child)
{
    if(child->getPayload() <= self->getPayload())
    {
        self->setLeftChild(child);
    }
    else if(child->getPayload() > self->getPayload())
    {
        self->setRightChild(child);
    }
}

  

