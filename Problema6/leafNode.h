#pragma once
#include "node.h"

class LeafNode : public Node
{
public:
    LeafNode(int);
    int getNodeCount();
    Node *getNode(int);
};