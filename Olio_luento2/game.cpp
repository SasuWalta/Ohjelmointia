#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max_number)

{
#ifdef DEBUG
    cout << "[DEBUG] Game-konstruktori kutsuttu" << endl;
    cout << "[DEBUG] max_number = " << max_number << endl;
#endif
    this->max_number = max_number;

    srand(time(NULL));
    random_number = rand() % max_number + 1;

#ifdef DEBUG
    cout << "[DEBUG] Arvottu satunnaisluku = " << random_number << endl;
#endif
}

void Game::play()
{
#ifdef DEBUG
    cout << "[DEBUG] play()-funktio aloitettu" << endl;
#endif

        // jos vastaus oli väärä, peli palaa kohtaan kysymään lukua
    while (player_guess != random_number)
    {
        // kysytään pelaajan arvaus
        cout << "Anna arvaus " << endl;
        cin >> player_guess;
        num_of_guesses++;
        cout << "Pelaajan arvaus oli: " << player_guess << endl;

        // tarkistetaan oliko pelaajan luku pienempi vai suurempi
        // kerrotaan tarkistuksen tulos
        if (player_guess < random_number)
        {
            cout << "Arvaus on liian pieni" << endl;
        }
        else if (player_guess > random_number)
        {
            cout << "Arvaus oli liian suuri " << endl;
        }
        else
        {
            print_game_result();
        }
    }
#ifdef DEBUG
    cout << "[DEBUG] play()-funktio päättyy" << endl;
#endif
}
void Game::print_game_result()
{
#ifdef DEBUG
    cout << "[DEBUG] print_game_result()-funktio kutsuttu" << endl;
#endif

    cout << "Arvaus oli oikein, numero oli  " << random_number << endl;
    cout << "Arvauksia oli  " << num_of_guesses << endl;
}
