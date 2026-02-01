#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>
using namespace std;
#include "main.cpp"

class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string);
    double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);

protected:
    string omistaja;
    double saldo = 0; // real shit
};

#endif