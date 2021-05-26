#pragma once
#include "node.h"

class BinaryTree
{
public:
    Node *root;
    void setRoot(Node *);
    void walk();
};