#pragma once
#include <iostream>
using namespace std;
// #define DEBUG

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
    double saldo = 0; // real
};
