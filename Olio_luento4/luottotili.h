#pragma once
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string, double);
    bool deposit(double) override;
    bool withdraw(double) override;

protected:
    double luottoRaja = 0;
};