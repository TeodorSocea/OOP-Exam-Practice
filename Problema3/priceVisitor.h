#pragma once
#include "visitor.h"

class PriceVisitor : public Visitor
{
    void Visit(Book *);
    void Visit(Pen *);
};