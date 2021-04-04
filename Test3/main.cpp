#include "circle.h"
#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    // Circle c; // nu va compila
    Circle c1 = {10, 10, 10};
    Circle c2 = {15, 15, 2};
    cout << "Punctul cu coordonatele (17, 15) se gaseste pe c2: ";
    cout << boolalpha << (c2 == Punct{17, 15}) << endl;
    cout << "Punctul cu coordonatele (16, 15) se gaseste in c2: ";
    cout << boolalpha << (c2 > Punct{16, 15}) << endl;
    cout << "Punctul cu coordonatele (17, 15) se gaseste in c2: ";
    cout << boolalpha << (c2 > Punct{17, 15}) << endl;
    cout << "Diametrul lui c1 = " << (int)c1 << endl;
    cout << "Diametrul lui c2 = " << (int)c2 << endl;
    Circle c3 = ((c2("add_to_x", 10))("add_to_y", -10))("add_to_ray", 3);
    cout << "Cercul rezultat este (" << c3["x"] << "," << c3["y"] << ") ";
    cout << "si are raza de: " << c3["ray"] << endl;
}