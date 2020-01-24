//
// Created by storm on 1/21/2020.
//
#include <iostream>
#include<string>
using namespace std;


#ifndef UNTITLED_BOARD_H
#define UNTITLED_BOARD_H

class Board {
    public:

        //Constructor
        Board();

        //Function is used after ever turn to print move on screen.
        void printBoard();

        //Function is used when players want to play again.
        void resetBoard();

        //Function is used when a player plays
        void changeSpots(int, char);

        //Changes the the letters to upper case on the winning config.
        void changeBcWin();

        //Function that checks if the game has ended with a win or draw;
        bool gameEnd();

        //Functions that checks if it was a win or draw.
        bool checkWin();

        bool checkDraw();

        //Function handles conversion from lower to uppercase
        //This function is used in changeBcWin
        char winningUpper(char);

        //fPrints to screen when win or draw is detected and prompts to see whether another is going to be played.
        bool anotherGame();

    private:
        //Variable that changes the positions on the board.
        char spots[9] = {'1','2','3','4','5','6','7','8','9'};


};



#endif //UNTITLED_BOARD_H
