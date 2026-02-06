
#include "notifikaattori.h"
#include "seuraaja.h"

int main()
{
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    n.postita("Viesti 1");

    n.poista(&b);

    n.postita("Viesti 2");

    return 0;
}