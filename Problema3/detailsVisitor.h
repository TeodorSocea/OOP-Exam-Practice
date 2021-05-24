#pragma once
#include "visitor.h"

class DetailsVisitor : public Visitor
{
    void Visit(Book *);
    void Visit(Pen *);
};