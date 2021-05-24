#pragma once
class Visitor;
class Product
{
public:
    virtual void Accept(Visitor *) = 0;
};