#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int max_number) {

    this->max_number = max_number;
    num_of_guesses = 0;

    srand(time(0));
    random_number = rand() % max_number + 1;
}

void Game::play(){

    cout << "Arvaa luku 1 ja " << max_number <<"väliltä" << endl;

    do {
        cout << "Anna arvaus: " << endl;
        cin >> player_guess;
        num_of_guesses++;

        if (player_guess < random_number){
            cout << "Liian pieni arvaus!" << endl;
        } 

        else if (player_guess > random_number){
            cout << "Liian suuri arvaus!" << endl;
        }
  
        print_game_result();

    }   
     while (player_guess != random_number); 
}   

    void Game::print_game_result(){

        cout << "Arvaus oli oikein, numero oli " << random_number << endl;
        cout << "Arvauksia oli" << num_of_guesses << endl; 
    }