#include "leafNode.h"

LeafNode::LeafNode(int val)
{
    value = val;
}

int LeafNode::getNodeCount()
{
    return 1;
}

Node *LeafNode::getNode(int index)
{
    return this;
}