#include "Person.h"
#include <string.h>
#include <stdlib.h>
Person::Person(const char *nume, int varsta, float inaltime)
{
    this->nume = new char[strlen(nume) + 1];
    this->varsta = new char[4];
    strcpy(this->nume, nume);
    itoa(varsta, this->varsta, 10);
    this->inaltime = inaltime;

    media = 0;
    capacitate = 0;
    nr_note = 0;
    note = new int[capacitate];
}

char *Person::operator[](const char *type)
{
    if (strcmp("nume", type) == 0)
        return this->nume;
    if (strcmp("varsta", type) == 0)
        return this->varsta;
}

void Person::addNote(int nota)
{
    if (this->nr_note == this->capacitate)
    {
        int newSize = this->capacitate * 2;
        int *auxElements = new int[newSize];
        memcpy(auxElements, this->note, this->nr_note * sizeof(int));
        delete[] this->note;
        this->capacitate = newSize;
        this->note = auxElements;
    }
    this->note[this->nr_note++] = nota;
}

Person::operator int()
{
    float suma = 0;
    for (int i = 0; i < nr_note; i++)
        suma += note[i];
    suma = suma != 0 ? suma / nr_note : 0;
    return suma;
}