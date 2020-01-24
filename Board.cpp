//
// Created by storm on 1/21/2020.
//
#include <iostream>
#include<string>
#include "Board.h"
using namespace std;


/*
spots[0]    spots[1]     spots[2]

spots[3]    spots[4]     spots[5]

spots[6]    spots[7]    spots[8]
*/

Board :: Board(){

}

void Board :: printBoard() {
    cout << "+---+---+---+" << endl;
    cout << "| "  << spots[0] << " | " << spots[1] << " | " << spots[2] << " |" << endl;
    cout << "+---+---+---+" << endl;
    cout << "| "  << spots[3] << " | " << spots[4] << " | " << spots[5] << " |" << endl;
    cout << "+---+---+---+" << endl;
    cout << "| "  << spots[6] << " | " << spots[7] << " | " << spots[8] << " |" << endl;
    cout << "+---+---+---+" << endl;
}

void Board :: changeSpots(int spotsss, char piecess) {
    int spotss = spotsss-1;
    spots [spotss] = char(piecess);
}

void Board :: resetBoard() {
    spots[0] = '1';
    spots[1] = '2';
    spots[2] = '3';
    spots[3] = '4';
    spots[4] = '5';
    spots[5] = '6';
    spots[6] = '7';
    spots[7] = '8';
    spots[8] = '9';

}

bool Board ::checkWin() {
    //Eight winning conditions to check
    if ((spots[0] == spots[1]) && (spots[1] == spots[2])) {
        return true;
    }
    else if ((spots[3] == spots[4]) && (spots[4] == spots[5])) {
        return true;
    }
    else if ((spots[6] == spots[7]) && (spots[7] == spots[8])) {
        return true;
    }
    else if ((spots[0] == spots[3]) && (spots[3] == spots[6])) {
        return true;
    }
    else if ((spots[1] == spots[4]) && (spots[4] == spots[7])) {
        return true;
    }
    else if ((spots[2] == spots[5]) && (spots[5] == spots[8])) {
        return true;
    }
    else if ((spots[0] == spots[4]) && (spots[4] == spots[8])) {
        return true;
    }
    else if ((spots[6] == spots[4]) && (spots[4] == spots[2])) {
        return true;
    }
    else{
        return false;
    }
}

char Board :: winningUpper(char lowercase){
    char uppercase = lowercase -32;
    return uppercase;
}

void Board ::changeBcWin() {
    //Eight winning conditions to check
    if (spots[0] == spots[1] && spots[1] == spots[2]) {
        spots[0] = winningUpper(spots[0]);
        spots[1] = winningUpper(spots[1]);
        spots[2] = winningUpper(spots[2]);
    }
    else if (spots[3] == spots[4] && spots[4] == spots[5]) {
        spots[3] = winningUpper(spots[3]);
        spots[4] = winningUpper(spots[4]);
        spots[5] = winningUpper(spots[5]);
    }
    else if (spots[6] == spots[7] && spots[7] == spots[8]) {
        spots[6] = winningUpper(spots[6]);
        spots[7] = winningUpper(spots[7]);
        spots[8] =  winningUpper(spots[8]);
    }
    else if (spots[0] == spots[3] && spots[3] == spots[6]) {
        spots[0] = winningUpper(spots[0]);
        spots[3] = winningUpper(spots[3]);
        spots[6] = winningUpper(spots[6]);
    }
    else if (spots[1] == spots[4] && spots[4] == spots[7]) {
        spots[1] = winningUpper( spots[1]);
        spots[4] = winningUpper(spots[4]);
        spots[7] = winningUpper(spots[7]);
    }
    else if (spots[2] == spots[5] && spots[5] == spots[8]) {
        spots[2] = winningUpper(spots[2]);
        spots[5] = winningUpper(spots[5]);
        spots[8] = winningUpper(spots[8]);
    }
    else if (spots[0] == spots[4] && spots[4] == spots[8]) {
        spots[0] = winningUpper(spots[0]);
        spots[4] = winningUpper(spots[4]);
        spots[8] = winningUpper(spots[8]);
    }
    else if (spots[6] == spots[4] && spots[4] == spots[2]) {
       spots[6] = winningUpper(spots[6]);
       spots[4] = winningUpper(spots[4]);
       spots[2] = winningUpper(spots[2]);
    }
    printBoard();
}

bool Board :: checkDraw() {
    if (checkWin() == false)
        for (auto x : spots){
            if( (x == 'x') || (x =='o')){
                continue;
            }
            else{
                return false;
            }
        }
    return true;
}

bool Board :: gameEnd() {
    if (checkWin() == true || checkDraw() == true) {
        return true;
    }
    else{
        return false;
    }
}

bool Board :: anotherGame(){
    // Variable to keep track of if they want to play again.
    char yesOrNo;
    cout << "Would you like to play again? Enter y/n. " << endl;
    cin >> yesOrNo;
    //if yes return true if no return false.
    if (yesOrNo == 'y'){
        return true;
    }else{
        return false;
    }
}

