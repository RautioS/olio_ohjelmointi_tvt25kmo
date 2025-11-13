#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<Car> carList;
    carList.emplace_back("Skoda", "Ocativia", 2015);
    carList.emplace_back("Volvo", "Amazon", 1959);
    carList.emplace_back("Toyota", "Avensis", 2000);

    cout << "Second element" << endl;
    carList[1].printData();

    cout << "Full list" << endl;
    for (int i = 0; i <= 2; i++) {
        carList[i].printData();
    }

    return 0;
}
