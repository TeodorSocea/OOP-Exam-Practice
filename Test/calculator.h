#include "adunare.h"
#include "scadere.h"
#include "inmultire.h"
#include "impartire.h"
class Calculator
{
    operatie **Operatii;
    int count;
    int verif(operatie *);

public:
    Calculator();
    ~Calculator();

    void operator+=(operatie *);
    void operator-=(const char *);
    operator int();
    void Compute(int, int);
    bool operator[](const char *);
};
bool cmp(const char *, const char *);