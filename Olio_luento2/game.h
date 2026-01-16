#ifndef GAME_H
#define GAME_H

// #define DEBUG // kommentoi tämä pois jos haluat DEBUG tiedot piiloon (eikö ookkin aika hieno tapa löysin netistä:D)

class Game
{

private:
    int max_number;
    int random_number;
    int player_guess = 0;
    int num_of_guesses = 0;

public:
    Game(int max_number);
    void play();
    void print_game_result();
};

#endif