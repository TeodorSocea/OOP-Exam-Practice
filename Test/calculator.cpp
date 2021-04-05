#include "calculator.h"
#include "stdio.h"

Calculator::Calculator()
{
    this->Operatii = new operatie *[4];
    count = 0;
}
Calculator::~Calculator()
{
    delete[] this->Operatii;
}
void Calculator::operator+=(operatie *op)
{
    if (verif(op) == -1)
    {
        this->Operatii[count] = op;
        count++;
    }
}
int Calculator::verif(operatie *op)
{
    for (int i = 0; i < count; i++)
        if (cmp(Operatii[i]->nume, op->nume))
            return i;
    return -1;
}
Calculator::operator int()
{
    return count;
}
void Calculator::Compute(int a, int b)
{
    for (int i = 0; i < count; i++)
    {
        if (cmp(Operatii[i]->nume, "Adunare"))
        {
            printf("Adunare(%d,%d)=%d\n", a, b, a + b);
        }
        if (cmp(Operatii[i]->nume, "Scadere"))
        {
            printf("Scadere(%d,%d)=%d\n", a, b, a - b);
        }
        if (cmp(Operatii[i]->nume, "Inmultire"))
        {
            printf("Inmultire(%d,%d)=%d\n", a, b, a * b);
        }
        if (cmp(Operatii[i]->nume, "Impartire"))
        {
            printf("Impartire(%d,%d)=%d\n", a, b, a / b);
        }
    }
}
bool Calculator::operator[](const char *type)
{
    for (int i = 0; i < count; i++)
        if (cmp(Operatii[i]->nume, type))
            return true;
    return false;
}
void Calculator::operator-=(const char *removed)
{
    int index = -1;
    for (int i = 0; i < count; i++)
        if (cmp(Operatii[i]->nume, removed))
        {
            index = i;
            break;
        }
    delete[] Operatii[index];
    for (int i = index; i < count - 1; i++)
        Operatii[i] = Operatii[i + 1];
    count--;
}
bool cmp(const char *a, const char *b)
{
    int len_a = sizeof(a) / sizeof(char);
    int len_b = sizeof(b) / sizeof(char);
    if (len_a != len_b)
        return false;
    for (int i = 0; i < len_a; i++)
        if (a[i] != b[i])
            return false;
    return true;
}