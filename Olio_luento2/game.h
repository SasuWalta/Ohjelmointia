#ifndef GAME_H
#define GAME_H

class Game{
    
    private:

    int max_number;
    int random_number;
    int player_guess;
    int num_of_guesses;

    public:
    Game(int max_number);
    void play();
    void print_game_result();
};




#endif