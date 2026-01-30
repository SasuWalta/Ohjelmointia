#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "luottotili.h"
using namespace std;

class Asiakas
{
public:
    Asiakas();
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool talletus(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, Asiakas &);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif