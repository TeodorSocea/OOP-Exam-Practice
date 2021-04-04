#include "prop.h"
#include <stdlib.h>

bool strcmp(char *a, char *b)
{
    int a_len = sizeof(a) / sizeof(char);
    int b_len = sizeof(b) / sizeof(char);
    if (a_len != b_len)
        return false;
    for (int i = 0; i < a_len; i++)
        if (a[i] != b[i])
            return false;
    return true;
}

Propozitie::~Propozitie()
{
    delete[] propozitie;
}
Propozitie::Propozitie(char *input)
{
    Set(input);
}
void Propozitie::Set(char *input)
{
    count = 0;
    total_chars = 0;
    vowals = 0;
    numbers = 0;
    length = 0;
    if (propozitie != nullptr)
        this->~Propozitie();

    int len = sizeof(input) / sizeof(char);
    length = len;
    const char *vowels = "aeiouAEIOU";
    const int v_len = 10;
    propozitie = new char[len];

    for (int i = 0; i < len; i++)
    {
        propozitie[i] = input[i];
        if (propozitie[i] != ' ')
            total_chars++;
        if (propozitie[i] == ' ' || propozitie[i] == '.')
        {
            count++;
            if (propozitie[i - 1] >= '0' && propozitie[i - 1] <= '9')
                numbers++;
        }
        for (int j = 0; j < v_len; j++)
        {
            if (propozitie[i] == vowels[j])
                vowals++;
        }
    }
}

int Propozitie::operator[](char *req)
{
    if (strcmp(req, "count"))
        return count;
    else if (strcmp(req, "numbers"))
        return numbers;
    else if (strcmp(req, "vowals"))
        return vowals;
    else if (strcmp(req, "total_chars"))
        return total_chars;
    else
        return -1;
}

char Propozitie::operator[](int index)
{
    if (index < 0 ? -index : index >= length)
        return NULL;
    else
}