#pragma once
#include "node.h"

class BinaryNode : public Node
{
public:
    Node *left, *right;
    BinaryNode(int, Node *, Node *);
    int getNodeCount();
    Node *getNode(int);
};