#pragma once
#include "masina.h"
class Dacia : public Masina
{
    string color;

public:
    Dacia(string);
    string GetColor();
    string GetName();
};