#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

// #define DEBUG

using namespace std;

int main()
{
    cout << "santtu on iha berseestä :(" << endl;

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

    return 0;
}