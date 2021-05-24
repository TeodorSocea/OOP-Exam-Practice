#pragma once
#include "book.h"
#include "pen.h"
class Visitor
{
public:
    virtual void Visit(Book *) = 0;
    virtual void Visit(Pen *) = 0;
};