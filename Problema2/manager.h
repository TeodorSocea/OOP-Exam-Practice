#include "angajat.h"
#include <vector>
#include <iostream>
class Manager : public Angajat
{

    vector<Angajat *> echipa;
    string numeEchipa;

public:
    Manager(string numeEchipa, string nume, int salariu, int id) : Angajat(nume, salariu, id)
    {
        this->numeEchipa = numeEchipa;
        cout << "================"
             << "\n"
             << numeEchipa << "\n";
    }
    bool Angajeaza(Angajat *);
    bool Concediaza(Angajat *);
    Angajat *GetAngajat(int);
    void Lucreaza();
};