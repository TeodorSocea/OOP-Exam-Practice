#include "impartire.h"

Impartire::Impartire()
{
    this->nume = new char[10];
    this->nume = "Impartire";
}
Impartire::~Impartire()
{
    delete[] this->nume;
}