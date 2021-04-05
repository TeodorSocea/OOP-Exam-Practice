#include "scadere.h"

Scadere::Scadere()
{
    this->nume = new char[8];
    this->nume = "Scadere";
}
Scadere::~Scadere()
{
    delete[] this->nume;
}