#include "car.h"



string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto : " << brand << " " << model <<endl;
    cout << "Moottori : " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" <<endl;
    cout << "Rengas 1 : " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2 : " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3 : " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4 : " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;

}

Car::Car()
{

}

Car::Car(string b, string m)
{
    brand = b;
    model = m;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("Talvirengas");
    objWheel2.setSize(17);
    objWheel2.setType("Talvirengas");
    objWheel3.setSize(17);
    objWheel3.setType("Talvirengas");
    objWheel4.setSize(17);
    objWheel4.setType("Talvirengas");
}
