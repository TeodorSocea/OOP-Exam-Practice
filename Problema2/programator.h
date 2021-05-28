#pragma once
#include "angajat.h"

class Programator : public Angajat
{
    string cod;

public:
    void Lucreaza();
    void Add(string);
    Programator(string nume, int salariu, int id) : Angajat(nume, salariu, id) {}
    string GetCode();
};