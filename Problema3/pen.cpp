#include "pen.h"
#include "visitor.h"

Pen::Pen()
{
    color = "negru";
    price = 5;
}

void Pen::Accept(Visitor *v)
{
    v->Visit(this);
}

string Pen::GetColor()
{
    return color;
}

int Pen::GetPrice()
{
    return price;
}