#include "parcare.h"
#include <algorithm>
#include <iostream>
void Parcare::Create(int c)
{
    cap = c;
}

bool Parcare::Add(Masina *m)
{
    if (masini.size() == cap)
        return false;
    masini.push_back(m);
    return true;
}

void Parcare::RemoveByName(string n)
{
    masini.erase(remove_if(masini.begin(), masini.end(), [&](Masina *m) {
                     if (m->GetName() == n)
                         return true;
                     return false;
                 }),
                 masini.end());
}

int Parcare::GetCount()
{
    return masini.size();
}

bool Parcare::IsFull()
{
    return masini.size() == cap;
}

void Parcare::ShowAll()
{
    cout << "SHOW-ALL:";
    for (auto masina : masini)
    {
        cout << masina->GetName() << "(" << masina->GetColor() << "), ";
    }
    cout << "\n";
}

void Parcare::ShowByColor(string c)
{
    cout << "SHOW-COLOR: (" << c << ")";
    for (auto masina : masini)
    {
        if (masina->GetColor() == c)
        {
            cout << masina->GetName() << ", ";
        }
    }
    cout << "\n";
}