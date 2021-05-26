#pragma once

class Node
{
public:
    int value;
    virtual Node *getNode(int) = 0;
    virtual int getNodeCount() = 0;
};