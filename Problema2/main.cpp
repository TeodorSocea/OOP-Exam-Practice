#include "programator.h"
#include "manager.h"

int main()
{
    Programator petru("Petru", 1000, 0);
    Programator maria("Maria", 1100, 1);
    Manager mihai("C++", "Mihai", 1200, 2);
    mihai.Angajeaza(&maria);
    mihai.Angajeaza(&petru);
    petru.Add("int main()\n{\n");
    maria.Add("std::cout<<\"Hello World\";\n");
    mihai.Lucreaza();
    Programator george("George", 900, 3);
    george.Add(petru.GetCode());
    george.Add(maria.GetCode());
    george.Add("\n}\n");
    mihai.Concediaza(&petru);
    mihai.Angajeaza(&george);
    mihai.Lucreaza();
}