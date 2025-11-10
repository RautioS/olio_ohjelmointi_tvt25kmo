#include "rectangle.h"
#include "iostream"

using namespace std;

Rectangle::Rectangle() {}

double Rectangle::getArea()
{
    return width * height;

}

double Rectangle::getCircum()
{
    return 2 * (width + height);
}

void Rectangle::setWidth(const double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(const double newHeight)
{
    height = newHeight;
}

Rectangle::~Rectangle()
{
    cout<<"Luokan tuhoajaa kutsuttiin"<<endl;
}
