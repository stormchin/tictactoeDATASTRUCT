//
// Created by storm on 1/21/2020.
//
#include <iostream>
using namespace std;

#ifndef UNTITLED_PLAYER_H
class Player {
    public:
        //Constructors for Player
        Player (string);

        //Functions for players to change variables

        void setPiece(char);

        //Function to print statistics
        void printStats();



        //String Variable for Player to keep track of Name and piece choose
        string fullName;
        string first = "";
        string last = "";
        //Char to keep track of who is x and who is o.
        char piece = ' ';
        //int to keep track of who is going first
        int turn = 0;

        //Integer Variables for Player to access their wins and losses
        int  wins = 0;
        int losses = 0;
        int draws = 0;

        //Keeps track of who's turn it is
        bool firstTurn = false;

};


#define UNTITLED_PLAYER_H

#endif //UNTITLED_PLAYER_H
