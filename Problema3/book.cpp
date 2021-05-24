#include "book.h"
#include "visitor.h"
Book::Book()
{
    nrPages = 0;
    price = 0;
}

void Book::Accept(Visitor *v)
{
    v->Visit(this);
}

int Book::GetNrPages()
{
    return nrPages;
}

int Book::GetPrice()
{
    return price;
}

void Book::AddAuthor(Author *a)
{
    auths.push_back(a);
}
