#include "italianChef.h"

italianChef::italianChef()
{
    cout << "ItalianChef constructor active" << endl;
}

italianChef::italianChef(string cN)
{
    cout << "ItalianChef constructor active" << endl;
    chefName = cN;
}

italianChef::~italianChef()
{
    cout << "ItalianChef denstructor active" << endl;
}

bool italianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;
    // if (pw != password) return false; // muuta string compare
    water = amountOfWater;
    flour = amountOfFlour;
    makePizza();
    numberOfPizzas = makePizza();
    cout << "You made " << numberOfPizzas << " pizzas!" << endl;
    return true;
}

int italianChef::makePizza()
{
    cout << "Pizza function active" << endl;
    cout << "Amount of water: " << water << " and " << "amount of flour: " << flour << endl;
    // teetähän pizzavalmistus algoritmi

    return 0;
}