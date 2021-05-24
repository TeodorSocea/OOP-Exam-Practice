#include <string>
using std::string;
class Author
{
    string surname;
    string firstname;

public:
    Author();
    Author(string surname, string firstname) : surname{surname}, firstname{firstname} {}
    string GetSurname();
    string GetFirstname();
};