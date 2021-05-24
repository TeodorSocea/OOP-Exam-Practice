#pragma once
#include "product.h"
#include "author.h"
#include <vector>
using std::vector;
class Book : public Product
{
    int nrPages;
    int price;

public:
    vector<Author *> auths;
    Book(int Price, int nrPages) : nrPages{nrPages}, price{Price} {}
    Book();
    void AddAuthor(Author *);
    void Accept(Visitor *);
    int GetNrPages();
    int GetPrice();
};