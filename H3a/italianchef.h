#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string);
    string getName();
    void makePasta();
    ~ItalianChef();
};

#endif // ITALIANCHEF_H
