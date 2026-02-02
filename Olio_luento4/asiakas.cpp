#include "asiakas.h"

Asiakas::Asiakas()
{

#ifdef DEBUG
    cout << "Olen asiakas defaultkonstrktorissa" << endl;
#endif
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
#ifdef DEBUG
    cout << "Olen asiakas parametrikonstruktissa" << endl;
#endif
    nimi = name;
}

void Asiakas::showSaldo()
{

    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}

// bool Asiakas::tiliSiirto(double sum, Asiakas &kohde)
bool Asiakas::tiliSiirto(double sum, Asiakas *kohde)
{
    nosto(sum);
    kohde->talletus(sum);
    return true;
}

string Asiakas::getNimi()
{
    return nimi;
}

bool Asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
    return true;
}

bool Asiakas::nosto(double sum)
{
    kayttotili.withdraw(sum);
    return true;
}

bool Asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
    return true;
}

bool Asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
    return true;
}