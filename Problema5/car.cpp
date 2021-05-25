#include "car.h"

string Car::getCarModel()
{
    return model;
}
void Car::setCarModel(string _model)
{
    model = _model;
}
int Car::getCarYear()
{
    return year;
}
void Car::setCarYear(int _year)
{
    year = _year;
}
string Car::getCarType()
{
    return type;
}
void Car::setCarType(string _type)
{
    type = _type;
}
int Car::getDoorsNumber()
{
    return doors;
}
void Car::setDoorsNumber(int _doors)
{
    doors = _doors;
}