/* ************************************ */
//   Storm Chin   (Jan 26th 202)        //
//   Dr.Ung Data Struct and Algorithims //
//         1-1:50pm Spring MWF          //
/* ************************************ */

#include <iostream>
using namespace std;

#ifndef UNTITLED_PLAYER_H
class Player {
    public:

        //Constructor
        /*                  ************************************                 */
        //                      Creates Player Object                            //
        //          creates first and last name based off of full name.          //
        //    separates fullname at space and saves the characters before        //
        //               and after in first and last variables                   //
        /*                  ************************************                 */
        Player (string);



        /*                  ************************************                    */
        //      Function that takes in a character and sets this character to the   //
        //              piece variable for the player                               //
        /*                      ************************************               */
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



};


#define UNTITLED_PLAYER_H

#endif //UNTITLED_PLAYER_H
