#include "author.h"

Author::Author()
{
    surname = "surname";
    firstname = "firstname";
}

string Author::GetFirstname()
{
    return firstname;
}

string Author::GetSurname()
{
    return surname;
}