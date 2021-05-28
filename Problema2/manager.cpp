#include "manager.h"
bool Manager::Angajeaza(Angajat *a)
{
    echipa.push_back(a);
    return true;
}

bool Manager::Concediaza(Angajat *a)
{
    for (auto it = echipa.begin(); it != echipa.end(); ++it)
    {
        if ((*it)->GetNume() == a->GetNume())
        {
            echipa.erase(it);
            return true;
        }
    }
    return false;
}

Angajat *Manager::GetAngajat(int id)
{
    for (auto angajat : echipa)
    {
        if (angajat->GetId() == id)
        {
            return angajat;
        }
    }
    return nullptr;
}

void Manager::Lucreaza()
{
    cout << "================"
         << "\n";
    cout << numeEchipa << "\n";
    for (auto angajat : echipa)
    {
        angajat->Lucreaza();
    }
    cout << "================"
         << "\n";
}