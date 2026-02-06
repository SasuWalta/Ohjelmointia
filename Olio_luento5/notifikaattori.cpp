
#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori konstruktori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *o)
{
    cout << "Notifikaattori lisaa seuraajan " << o->getNimi() << endl;
    o->next = seuraajat;
    seuraajat = o;
}

void Notifikaattori::poista(Seuraaja *o)
{
    cout << "Notifikaattori on poistanut kayttajan: " << o->getNimi() << endl;
    Seuraaja *temp1 = seuraajat;
    Seuraaja *temp2 = nullptr;
    while (temp1 != nullptr)
    {
        if (temp1 == o)
        {
            temp2->next = temp1->next;
            return;
        }
        else
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
    }
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat: " << endl;
    Seuraaja *temp = seuraajat;
    while (seuraajat != nullptr)
    {

        cout << "Seuraaja " << seuraajat->getNimi() << endl;
        seuraajat = seuraajat->next;
    }
    seuraajat = temp;
    return;
}

void Notifikaattori::postita(string viesti)
{
    cout << "Notifikaattori postittaa viestin: " << viesti << endl;
    Seuraaja *temp = seuraajat;
    while (seuraajat != nullptr)
    {
        cout << "Seuraaja " << seuraajat->getNimi() << " sain taman viestin: " << viesti << endl;
        seuraajat = seuraajat->next;
    }
    seuraajat = temp;
    return;
}