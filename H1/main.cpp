#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int, int);
float retDiv(int, int);

int main() {
    int a;
    int b;

    cout << "Give a number" << endl;
    cin >> a;
    cout << "Give a second number" << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << "Sum2: " << retSum(a, b) << endl;

    try {
        cout << "Div2: " << retDiv(a, b) << endl;
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "Sum: " << sum << endl;
}

void calcDiv(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error" << endl;
    } else {
        float div = static_cast<float>(num1) / (num2);
        cout << "Div: " << div << endl;
    }
}

int retSum(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

float retDiv(int num1, int num2) {
    if (num2 == 0) {
        throw runtime_error("Divider can't be zero");
    }
    return static_cast<float>(num1) / (num2);
}
