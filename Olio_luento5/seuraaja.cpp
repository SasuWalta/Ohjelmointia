
#include "seuraaja.h"

Seuraaja::Seuraaja(string nm)
{
    nimi = nm;
    cout << "Seuraaja " << nimi << " luotu" << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " vastaanotti viestin: " << viesti << endl;
}
