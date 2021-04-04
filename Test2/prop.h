#pragma once
#include <vector>
#include <string>
using std::string;
using std::vector;
class Propozitie
{
public:
    Propozitie(char *);
    ~Propozitie();
    void Set(char *);
    int operator[](char *);
    char operator[](int);

private:
    vector<string> prop;
    char *propozitie;
    int length;
    int count, total_chars, vowals, numbers;
};

bool strcmp(char *, char *);