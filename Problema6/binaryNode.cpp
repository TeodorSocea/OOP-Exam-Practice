#include "binaryNode.h"

BinaryNode::BinaryNode(int val, Node *l, Node *r)
{
    value = val;
    left = l;
    right = r;
}

int BinaryNode::getNodeCount()
{
    return 2;
}

Node *BinaryNode::getNode(int index)
{
    if (index == 1)
    {
        return left;
    }
    return right;
}