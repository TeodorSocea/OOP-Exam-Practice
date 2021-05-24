#include "priceVisitor.h"
#include <iostream>
using std::cout;
void PriceVisitor::Visit(Book *b)
{
    cout << "Pretul cartii este " << b->GetPrice() << " lei."
         << "\n";
}
void PriceVisitor::Visit(Pen *p)
{
    cout << "Pretul pixului este " << p->GetPrice() << " lei."
         << "\n";
}