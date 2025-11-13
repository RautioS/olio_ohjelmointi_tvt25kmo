#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;


class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car(string, string, int);
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
    void printData();
};

#endif // CAR_H
