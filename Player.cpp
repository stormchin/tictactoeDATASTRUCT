//
// Created by storm on 1/21/2020.
//
#include "PLayer.h"
#include <string>


Player::Player(string name) {
    fullName = name;
    string pname = "";
    for (auto x : name) {
        if (x == ' ') {
            first = pname;
            pname = "";
        } else {
            pname = pname + x;
            if (first != "") {
                last = pname;
            }
        }
    }
}

void Player:: setPiece(char pieces) {
    piece = pieces;
}

void Player :: printStats() {
    cout << "Player " << first << " Wins: " << wins << "      Losses: "<< losses << "      Draws: " << draws << endl;
}