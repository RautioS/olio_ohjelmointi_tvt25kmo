#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 6;

    cout << "Osoitin" << endl;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "********************************************************" << endl;

    int *pointerA = &a;
    cout << "Pointteri" << endl;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;
    cout << "********************************************************" << endl;

    int &refA = a;
    cout << "Referenssi" << endl;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA osoittaman muistipaikan arvo on: " << refA << endl;
    cout << "********************************************************" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << "********************************************************" << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2 " << objA2.getBinfo() << endl;
    cout << endl;

    return 0;
}
