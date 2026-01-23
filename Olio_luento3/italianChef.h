#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class italianChef : public Chef
{
public:
    italianChef();
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);

private:
    int flour;
    int water;
    string password = "pizza";
    int makePizza();
};

#endif