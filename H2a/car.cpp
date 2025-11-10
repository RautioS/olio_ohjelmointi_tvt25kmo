#include "car.h"
#include <iostream>

Car::Car() {}



void Car::setBrand(const string newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string newModel)
{
    model = newModel;
}

void Car::setYearModel(const int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"Car information"<<endl;
    cout<<"Brand: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Year: "<<yearModel<<endl;
}
