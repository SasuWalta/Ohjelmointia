#include "chef.h"

Chef::Chef()
{
    cout << "Default construct active" << endl;
}

Chef::Chef(string cN)
{
    cout << "Default input construct active" << endl;
    chefName = cN;
}

Chef::~Chef()
{
    cout << "Default destructor active" << endl;
}

int Chef::makeSalad(int numberOfItems)
{
    cout << "Salad function active" << endl;
    cout << "You gave: " << numberOfItems << " ingredients" << endl;
    cout << "That makes: " << numberOfItems / 5 << " salad portions" << endl;
    return numberOfItems / 5;
}

int Chef::makeSoup(int numberOfItems)
{
    cout << "Soup function active" << endl;
    cout << "You gave: " << numberOfItems << " ingredients" << endl;
    cout << "That makes: " << numberOfItems / 3 << " soup portions" << endl;
    return numberOfItems / 3;
}

string Chef::getName()
{
    cout << "Chef name function active" << endl;
    cout << "Name of the chef is: " << chefName << endl;
    return chefName;
}

void Chef::setName(string cN)
{
    cout << "Setter active" << endl;
    chefName = cN;
}