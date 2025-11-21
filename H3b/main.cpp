#include "animal.h"
#include "dog.h"

#include <memory>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unique_ptr<Animal> objAnimal = make_unique<Animal>();
    objAnimal->callOut();
    unique_ptr<Dog> objDog = make_unique<Dog>();
    objDog->callOut();
}
