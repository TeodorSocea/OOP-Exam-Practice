#pragma once
#include "masina.h"
#include <vector>
class Parcare
{
    vector<Masina *> masini;
    int cap;

public:
    void Create(int);
    bool Add(Masina *);
    void RemoveByName(string);
    int GetCount();
    bool IsFull();
    void ShowAll();
    void ShowByColor(string);
};