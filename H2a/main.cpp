#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main() {
    Car objectCar1;
    objectCar1.setBrand("Skoda");
    objectCar1.setModel("Octavia");
    objectCar1.setYearModel(2015);

    objectCar1.printData();
    cout << "***********************" << endl;

    Rectangle *objectRectangle1 = new Rectangle();
    objectRectangle1->setWidth(10.0);
    objectRectangle1->setHeight(20.0);

    cout << "Area: " << objectRectangle1->getArea() << endl;
    cout << "Circum: " << objectRectangle1->getCircum() << endl;

    delete objectRectangle1;
    objectRectangle1 = nullptr;

    cout << "***********************" << endl;

    unique_ptr<Student> student1 = make_unique<Student>();

    student1->setName("Aku Ankka");
    student1->setStudentNumber(64574);
    student1->setAverage(4.43);

    cout << "Name :" << student1->getName() << endl;
    cout << "Studentnumber: " << student1->getStudentNumber() << endl;
    cout << "Average: " << student1->getAverage() << endl;

    return 0;
}
