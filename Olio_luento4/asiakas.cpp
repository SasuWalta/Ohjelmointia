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

bool Asiakas::tiliSiirto(double sum, Asiakas &kohde)
{
    if (kayttotili.withdraw(sum))
    {
        kohde.kayttotili.deposit(sum);
        return true;
    }
    return false;
}

string Asiakas::getNimi()
{
    return nimi;
}

bool Asiakas::talletus(double sum)
{
    return kayttotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    return luottotili.withdraw(sum);
}