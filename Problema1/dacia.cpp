#include "dacia.h"

Dacia::Dacia(string c)
{
    color = c;
}

string Dacia::GetColor()
{
    return color;
}

string Dacia::GetName()
{
    return "Dacia";
}