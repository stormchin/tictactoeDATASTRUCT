/* ************************************ */
//   Storm Chin   (Jan 26th 202)        //
//   Dr.Ung Data Struct and Algorithims //
//         1-1:50pm Spring MWF          //
/* ************************************ */

#include "PLayer.h"
#include <string>


Player::Player(string name)
{
    fullName = name;
    string pname = "";
    for (auto x : name)
    {
        if (x == ' ')
        {
            first = pname;
            pname = "";
        }
        else
        {
            pname = pname + x;
            if (first != "")
            {
                last = pname;
            }
        }
    }
}

void Player:: setPiece(char pieces)
{
    piece = pieces;
}

void Player :: printStats()
{
    cout << "Player " << first << " Wins: " << wins << "      Losses: "<< losses << "      Draws: " << draws << endl;
}