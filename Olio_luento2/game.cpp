#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

Game::Game(int max_number) {

    this-> max_number = max_number;

    srand(time(NULL));
    random_number = rand() % max_number + 1;
  
}

    void Game::play(){
    player_guess = 0;
    num_of_guesses = 0;
    //jos vastaus oli väärä, peli palaa kohtaan kysymään lukua
    while (player_guess != random_number){
        //kysytään pelaajan arvaus
        cout << "Anna arvaus " << endl;
        cin >> player_guess;
        num_of_guesses ++;
        cout << "Pelaajan arvaus oli: " << player_guess << endl;

        //tarkistetaan oliko pelaajan luku pienempi vai suurempi
        //kerrotaan tarkistuksen tulos
        if (player_guess < random_number){
            cout << "Arvaus oli liian pieni " << endl;
        } else if (player_guess > random_number){
            cout << "Arvaus oli liian suuri " << endl;
        } else{
            cout << "Arvaus oli oikein!" << endl;
                print_game_result();

        } 

        

    }
    
    }
    void Game::print_game_result(){

        cout << "Arvaus oli oikein, numero oli  " <<  random_number << endl;
        cout << "Arvauksia oli  " <<  num_of_guesses << endl; 
    }
    