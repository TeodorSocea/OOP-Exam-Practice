#include "dacia.h"
#include "toyota.h"
#include "ferari.h"
#include "parcare.h"
#include <iostream>

int main()
{
    Parcare p;
    p.Create(4);
    p.Add(new Dacia("rosu"));
    p.Add(new Toyota("verde"));
    cout << "Masini in parcare:" << p.GetCount() << boolalpha << " , Parcare plina: " << p.IsFull() << endl;
    p.Add(new FerrariRosu());
    p.Add(new Toyota("albastru"));
    p.Add(new Toyota("rosu")); // returns false - s-a atins capacitatea maxima
    cout << "Masini in parcare:" << p.GetCount() << boolalpha << " , Parcare plina: " << p.IsFull() << endl;
    p.ShowAll();
    p.ShowByColor("rosu");
    p.RemoveByName("Toyota");
    p.Add(new Dacia("gri"));
    p.ShowAll();
    cout << "Masini in parcare:" << p.GetCount() << boolalpha << " , Parcare plina: " << p.IsFull() << endl;
}