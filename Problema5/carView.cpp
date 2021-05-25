#include "carView.h"
#include <iostream>
using std::cout;

// -----
// Car:
// Model: Dacia | Year: 2000 | Type: 1310 | Doors Number: 4

void CarView::printCarDetails(string model, int year, string type, int doors)
{
    cout << "-----"
         << "\n";
    cout << "Car:"
         << "\n";
    cout << "Model: " << model << " | Year: " << year << " | Type: " << type << " | Doors Number: " << doors << "\n";
}