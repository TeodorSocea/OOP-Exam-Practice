#pragma once
#include "masina.h"
class Toyota : public Masina
{
    string color;

public:
    Toyota(string);
    string GetColor();
    string GetName();
};