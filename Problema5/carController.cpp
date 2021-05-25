#include "carController.h"

CarController::CarController(Car *_model, CarView *_view)
{
    model = _model;
    view = _view;
}

string CarController::getCarModel()
{
    return model->getCarModel();
}
void CarController::setCarModel(string _model)
{
    model->setCarModel(_model);
}
int CarController::getCarYear()
{
    return model->getCarYear();
}
void CarController::setCarYear(int _year)
{
    model->setCarYear(_year);
}
string CarController::getCarType()
{
    return model->getCarType();
}
void CarController::setCarType(string _type)
{
    model->setCarType(_type);
}
int CarController::getDoorsNumber()
{
    return model->getDoorsNumber();
}
void CarController::setDoorsNumber(int _doors)
{
    model->setDoorsNumber(_doors);
}

void CarController::updateCarView()
{
    view->printCarDetails(model->getCarModel(), model->getCarYear(), model->getCarType(), model->getDoorsNumber());
}