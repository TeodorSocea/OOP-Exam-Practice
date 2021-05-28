#include "programator.h"
#include <iostream>
void Programator::Add(string c)
{
    cod += c;
}

string Programator::GetCode()
{
    return cod;
}

void Programator::Lucreaza()
{
    cout << "[" << nume << "]:"
         << "\n"
         << cod;
}