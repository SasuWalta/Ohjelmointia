#include "chef.h"

Chef::Chef()
{
#ifdef DEBUG
    cout << "Default construct active" << endl;
#endif
}

Chef::Chef(string cN)
{
#ifdef DEBUG
    cout << "Default input construct active" << endl;
#endif
    chefName = cN;
}

Chef::~Chef()
{
#ifdef DEBUG
    cout << "Default destructor active" << endl;
#endif
}

int Chef::makeSalad(int numberOfItems)
{
#ifdef DEBUG
    cout << "Salad function active" << endl;
#endif
    cout << "You gave: " << numberOfItems << " salad ingredients" << endl;
    cout << "That makes: " << numberOfItems / 5 << " salad portions" << endl;
    return numberOfItems / 5;
}

int Chef::makeSoup(int numberOfItems)
{
#ifdef DEBUG
    cout << "Soup function active" << endl;
#endif
    cout << "You gave: " << numberOfItems << " soup ingredients" << endl;
    cout << "That makes: " << numberOfItems / 3 << " soup portions" << endl;
    return numberOfItems / 3;
}

string Chef::getName()
{
#ifdef DEBUG
    cout << "Chef name function active" << endl;
#endif
    cout << "Name of the chef is: " << chefName << endl;
    return chefName;
}

void Chef::setName(string cN)
{
#ifdef DEBUG
    cout << "Setter active" << endl;
#endif
    chefName = cN;
}