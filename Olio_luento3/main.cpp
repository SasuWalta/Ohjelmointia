#include "chef.h"
#include <iostream>
#include "italianChef.h"
using namespace std;

int main()
{
    string kokinNimi;
    Chef cook1("Gordon");
    // Chef cook2();
    kokinNimi = cook1.getName();
    // cout << "Main: kokinNimi is: " << kokinNimi << endl;

    // cook1.makeSalad(10);
    // cook1.makeSalad(4);
    cook1.makeSalad(18);

    // cook1.makeSoup(9);
    // cook1.makeSoup(2);
    cook1.makeSoup(31);

    italianChef it_cook1("Fabio");
    // it_cook1.makeSalad(12);
    // it_cook1.makeSoup(7);
    it_cook1.askSecret("pizza", 12, 13);

    return 0;
}
