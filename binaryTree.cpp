#include "binaryTree.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

BinaryTree::BinaryTree(Node* n)
{
   this->root = n;
   
}

Node* BinaryTree::insert(Node* node2add, Node* start)
{
   
   // Node* temp;
    if(node2add->getPayload() <= start->getPayload())
    {
       // temp = start->getLeftChild();
        //if(temp = NULL)
       // {
             this->root->setLeftChild(node2add);
            
        /*}
        else
        {
            insert(node2add, temp);
        }*/
        
    }
    else if(node2add->getPayload() > start->getPayload())
    {
        //temp = start->getRightChild();
       // if(temp = NULL)
       // {
            this->root->setRightChild(node2add);
        //}
       // else
       // {
           // insert(node2add, temp);
        //}
        //return NULL;
        
    }
      
    
}

void BinaryTree::inOrder(Node* n)
{
    if(n != NULL)
    {
        inOrder(n->getLeftChild());
        cout<<n->getPayload()<<endl;
        inOrder(n->getRightChild());
    }
       
    
}