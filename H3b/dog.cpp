#include "dog.h"

Dog::Dog() {
    std::cout << " Dog Olio luotiin" << std::endl;
}

void Dog::callOut()
{
    std::cout << "Koira haukkuu" << std::endl;

}

Dog::~Dog()
{
    std::cout << " Dog Olio tuhottiin" << std::endl;
}
