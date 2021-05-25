#pragma once
#include "carView.h"
#include "car.h"

class CarController
{
    Car *model;
    CarView *view;

public:
    CarController(Car *, CarView *);
    string getCarModel();
    void setCarModel(string);
    int getCarYear();
    void setCarYear(int);
    string getCarType();
    void setCarType(string);
    int getDoorsNumber();
    void setDoorsNumber(int);
    void updateCarView();
};