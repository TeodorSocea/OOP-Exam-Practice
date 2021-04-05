#include "inmultire.h"

Inmultire::Inmultire()
{
    this->nume = new char[10];
    this->nume = "Inmultire";
}
Inmultire::~Inmultire()
{
    delete[] this->nume;
}