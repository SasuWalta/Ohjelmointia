#pragma once
#include <iostream>
using namespace std;

class Seuraaja
{
public:
    Seuraaja(string);
    Seuraaja *next = nullptr;
    string getNimi();
    void paivitys(string);

private:
    string nimi;
};