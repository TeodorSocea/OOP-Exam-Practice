#include "detailsVisitor.h"
#include <iostream>
using std::cout;
void DetailsVisitor::Visit(Book *b)
{
    cout << "Cartea are " << b->GetNrPages() << " pagini, iar autorii sunt ";
    for (auto author : b->auths)
    {
        cout << "\"" << author->GetSurname() << " " << author->GetFirstname() << "\"";
        if (b->auths.size() > 1)
            cout << ", ";
    }
    cout << "."
         << "\n";
}
void DetailsVisitor::Visit(Pen *p)
{
    cout << "Pixul este de culoarea " << p->GetColor() << "."
         << "\n";
}