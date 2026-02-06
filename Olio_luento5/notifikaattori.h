#pragma once
#include <iostream>
using namespace std;
#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(Seuraaja *);
    void poista(Seuraaja *);
    void tulosta();
    void postita(string);

private:
    Seuraaja *seuraajat = nullptr;
};
