#include "car.h"
#include <iostream>

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData() {
    std::cout << "Vehicle information" << endl;
    std::cout << "Brand: " << brand << endl;
    std::cout << "Model: " << model << endl;
    std::cout << "Year: " << yearModel << endl;
    std::cout << "**********************" << endl;
}
