#include "toyota.h"

Toyota::Toyota(string c)
{
    color = c;
}

string Toyota::GetColor()
{
    return color;
}

string Toyota::GetName()
{
    return "Toyota";
}