#include "binaryTree.h"
#include <iostream>
using namespace std;
void BinaryTree::setRoot(Node *r)
{
    root = r;
}

void BinaryTree::walk()
{
    if (root->getNodeCount() == 2)
    {
        BinaryTree bt;
        bt.setRoot(root->getNode(1));
        bt.walk();
        cout << root->value << " ";
        bt.setRoot(root->getNode(2));
        bt.walk();
    }
    if (root->getNodeCount() == 1)
        cout << root->value << " ";
}