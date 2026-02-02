#include "luottotili.h"

Luottotili::Luottotili()
{
#ifdef DEBUG
    cout << "olen luottotili defaultkonstruktorissa" << endl;
#endif
}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
#ifdef DEBUG
    cout << "Olen luottotili parametrikonstruktorissa" << endl;
#endif
    luottoRaja = lr;
}

bool Luottotili::deposit(double sum)
{
#ifdef DEBUG
    cout << "Olen luottotili velanmaksu" << endl;
#endif
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jalkeen: " << saldo + sum << endl;

    if ((sum < 0) || ((sum + saldo) > 0))
        return false;

    saldo += sum;
    return true;
}

bool Luottotili::withdraw(double sum)
{
#ifdef DEBUG
    cout << "Olen luottotili velannosto" << endl;
#endif
    cout << "Luottoraja: " << luottoRaja << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jalkeen: " << saldo - sum << endl;

    if ((sum < 0) || (std::abs(saldo) > luottoRaja))
        return false;

    saldo -= sum;
    return true;
}