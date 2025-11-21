#include "animal.h"


Animal::Animal() {
    std::cout << "Animal olio luotiin" << std::endl;
}

void Animal::callOut()
{
    std::cout << "Eläin ääntelee" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal olio tuhottiin" << std::endl;
}
