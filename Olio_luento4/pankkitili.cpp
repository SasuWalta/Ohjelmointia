#include "pankkitili.h"

Pankkitili::Pankkitili()
{
#ifdef DEBUG
    cout << "Olen pankkitili default konstruktorissa" << endl;
#endif
}

Pankkitili::Pankkitili(string om)
{
#ifdef DEBUG
    cout << "Olen pankkitili parametrikonstruktorissa" << endl;
#endif
    omistaja = om;
}

double Pankkitili::getBalance()
{
#ifdef DEBUG
    cout << "Olen pankkitili saldokyselyssä" << endl;
#endif
    return saldo;
}

bool Pankkitili::deposit(double sum)
{
#ifdef DEBUG
    cout << "Olen pankkitili depositissa" << endl;
#endif

    if (sum < 0)
        return false;
    saldo += sum;
    return true;
}

bool Pankkitili::withdraw(double sum)
{
#ifdef DEBUG
    cout << "Olen pankkitili withdraw" << endl;
#endif

    if ((sum < 0) || ((saldo - sum) >= 0))
        return false;

    saldo -= sum;

    return true;
}
