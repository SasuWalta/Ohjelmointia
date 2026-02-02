#pragma once
#include <iostream>
#include "luottotili.h"
#include "pankkitili.h"
using namespace std;

class Asiakas
{
public:
    Asiakas();
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    //    bool tiliSiirto(double, Asiakas &);
    bool tiliSiirto(double sum, Asiakas *kohde);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};