
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

#define DEBUG

using namespace std;

int main()
{

    cout << "Begin:(" << endl;

    Pankkitili pt1;
    Pankkitili pt2("Markku");
    Luottotili lt1;
    Luottotili lt2("Pate", 500);
    pt2.deposit(100);
    pt2.withdraw(50);
    double luettuSaldo = pt2.getBalance();
    cout << "Marku saldo on: " << luettuSaldo << endl;
    lt2.withdraw(100);
    lt2.deposit(50);
    luettuSaldo = lt2.getBalance();
    cout << "Paten saldo on: " << luettuSaldo << endl;

    // Asiakas as1("Jaakko", 1000);
    // Asiakas as2("Jorma", 5000);

    Asiakas *pointteri1 = new Asiakas("Martti", 1000);
    Asiakas *pointteri2 = new Asiakas("Pertti", 5000);
    pointteri1->talletus(500);

    // as1.talletus(500);
    // as1.tiliSiirto(250, as2);
    cout << "as1 ennen: " << endl;
    pointteri1->showSaldo();
    // as1.showSaldo();
    cout << "as2 ennen: " << endl;
    pointteri2->showSaldo();
    // as2.showSaldo();
    // as1.tiliSiirto(250, as2);

    pointteri1->tiliSiirto(250, pointteri2);

    cout << "as1 jalkeen: " << endl;
    pointteri1->showSaldo();

    // as1.showSaldo();
    cout << "as2 jalkeen" << endl;
    // as2.showSaldo();
    pointteri2->showSaldo();

    return 0;
}