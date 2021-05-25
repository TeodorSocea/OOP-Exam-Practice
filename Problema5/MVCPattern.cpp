#include "MVCPattern.h"
#include "carController.h"

Car MVCPattern::getCar()
{
    return Car("Dacia", 2000, "1310", 4);
}

void MVCPattern::main()
{
    Car model = this->getCar();
    CarView view = CarView();
    CarController controller = CarController(&model, &view);
    controller.updateCarView();
    controller.setCarModel("Jaguar");
    controller.updateCarView();
    controller.setCarType("XF");
    controller.updateCarView();
    controller.setCarYear(2015);
    controller.updateCarView();
    controller.setDoorsNumber(5);
    controller.updateCarView();
}