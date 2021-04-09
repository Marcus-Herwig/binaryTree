#include <iostream>
#include "binaryTree.hpp"

using namespace std;

int main(int argc, char** argv)
{
    BinaryTree* bt = new BinaryTree();
    bt->add(5);
    bt->add(2);
    bt->add(13);
    bt->add(17);
    bt->add(10);
    bt->add(1);
    //cout << bt->getCount() << endl;
    bt->visitInOrder(); cout<<" in order ";
    cout<<" "<<endl;
    bt->visitPreOrder(); cout<<" pre order";
    cout<<" "<<endl;
    bt->visitPostOrder(); cout<<" post order";
    return 0;

}