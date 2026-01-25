#include "italianChef.h"
#include "chef.h"

italianChef::italianChef()
{
#ifdef DEBUG
    cout << "ItalianChef constructor active" << endl;
#endif
}

italianChef::italianChef(string cN)
{
#ifdef DEBUG
    cout << "ItalianChef constructor active" << endl;
#endif
    chefName = cN;
}

italianChef::~italianChef()
{
#ifdef DEBUG
    cout << "ItalianChef denstructor active" << endl;
#endif
}

bool italianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;
    cout << "Enter password" << endl;
    cin >> pw;
    if (pw.compare(password) != 0)
    {
        cout << "Wrong password" << endl;
        return false;
    }
    water = amountOfWater;
    flour = amountOfFlour;
    // makePizza();
    numberOfPizzas = makePizza();
    cout << "You made " << numberOfPizzas << " pizzas!" << endl;
    return true;
}

int italianChef::makePizza()
{
#ifdef DEBUG
    cout << "Pizza function active" << endl;
#endif
    cout << "Amount of water: " << water << " and " << "amount of flour: " << flour << endl;

    int perPizza = 5;
    int numberOfPizzas = min(water / perPizza, flour / perPizza);
    water -= numberOfPizzas * perPizza;
    flour -= numberOfPizzas * perPizza;

    cout << "Pizzas made: " << numberOfPizzas << endl;
    cout << "Remaining water: " << water << ", remaining flour: " << flour << endl;

    return numberOfPizzas;
}