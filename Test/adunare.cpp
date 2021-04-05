#include "adunare.h"

Adunare::Adunare()
{
    this->nume = new char[8];
    this->nume = "Adunare";
}
Adunare::~Adunare()
{
    delete[] this->nume;
}