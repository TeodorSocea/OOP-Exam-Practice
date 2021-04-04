#include "Person.h"
#include <iostream>
int main()
{
    Person p = {"Ionut", 26, 1.83};

    std::cout << p["nume"] << " are " << p["varsta"] << " ani" << std::endl;

    p.addNote(3);
    p.addNote(7);
    p.addNote(8);
    p.addNote(10);

    std::cout << int(p) << std::endl; // Afiseaza media aritmetica a notelor;

    return 0;
}