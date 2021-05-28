#pragma once
#include <string>
using namespace std;

class Angajat
{
protected:
    int salariu;
    string nume;
    int id;

public:
    Angajat(string nume, int salariu, int id) : nume{nume}, salariu{salariu}, id{id} {}
    string GetNume();
    int GetSalariu();
    int GetId();
    void SetSalariu(int);
    virtual void Lucreaza() = 0;
};