#pragma once
#include "product.h"
#include <string>
using std::string;
class Pen : public Product
{
    string color;
    int price;

public:
    Pen(int price, string color) : color{color}, price{price} {}
    Pen();
    void Accept(Visitor *);
    string GetColor();
    int GetPrice();
};