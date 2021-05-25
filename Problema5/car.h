#pragma once
#include <string>
using std::string;

class Car
{
    string model;
    int year;
    string type;
    int doors;

public:
    Car(string model, int year, string type, int doors) : model{model}, year{year}, type{type}, doors{doors} {}
    string getCarModel();
    void setCarModel(string);
    int getCarYear();
    void setCarYear(int);
    string getCarType();
    void setCarType(string);
    int getDoorsNumber();
    void setDoorsNumber(int);
};