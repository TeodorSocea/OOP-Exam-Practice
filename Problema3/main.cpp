#include "book.h"
#include "pen.h"
#include "priceVisitor.h"
#include "detailsVisitor.h"
int main()
{
    Pen pix_negru;
    Pen pix_rosu(10, "rosu");
    Book carte1;
    Book carte2(35, 150);
    Author author1;
    Author author2("Popescu", "Ion");
    Author author3("Simion", "Dan");
    carte1.AddAuthor(&author1);
    carte2.AddAuthor(&author2);
    carte2.AddAuthor(&author3);
    Product *lista_produse[4];
    lista_produse[0] = &pix_negru;
    lista_produse[1] = &pix_rosu;
    lista_produse[2] = &carte1;
    lista_produse[3] = &carte2;
    PriceVisitor pv;
    DetailsVisitor dv;
    for (int i = 0; i < 4; i++)
    {
        lista_produse[i]->Accept(&pv);
        lista_produse[i]->Accept(&dv);
    }
    return 0;
}
