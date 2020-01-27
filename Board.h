/* ************************************ */
//   Storm Chin   (Jan 26th 202)        //
//   Dr.Ung Data Struct and Algorithims //
//         1-1:50pm Spring MWF          //
/* ************************************ */

#include <iostream>
#include<string>
using namespace std;


#ifndef UNTITLED_BOARD_H
#define UNTITLED_BOARD_H

class Board
{
    public:

        //Constructor
        /* ************************************ */
        //         Creates board Object         //
        //                                      //
        /* ************************************ */

        Board();



        /*          ************************************            */
        // Function is used after ever turn to print move on screen.//
        //                                                          //
        /*          ************************************            */

        void printBoard();


        /*          ************************************            */
        //   Function resets the board. Should be called when       //
        //            player wants to play another game.            //
        /*          ************************************            */

        void resetBoard();



        /*          ************************************            */
        //     Function changes spot in the spot array               //
        //     based off of the spot specified in argument one      //
        //     and the character specified in argument two.          //
        /*          ************************************            */

        void changeSpots(int, char);


        /*              ************************************                */
        //      Changes the winning configuration to upper case x's or o's  //
        //                                                                  //
        //                                                                  //
        /*              ************************************                */
        void changeBcWin();



        /*              ************************************                */
        //    Function that checks if the game has ended with a win.        //
        //          If there is a win then functions returns true           //
        /*              ************************************                */

        bool checkWin();


        /*              ************************************                 */
        //    Function that checks if the game has ended with a draw.        //
        //          If there is a draw then functions returns true           //
        /*              ************************************                 */
        bool checkDraw();


        /*              ************************************                      */
        //     Function handles conversion from lower to uppercase.               //
        //   char that's lowercase is input and the output is char uppercase      //
        /*              ************************************                      */
        char winningUpper(char);


        /*              ************************************                      */
        //     function prompts the user if he would like to play another Game    //
        //   if the user wants to play again the function returns true            //
        /*              ************************************                      */
        bool anotherGame();

    private:
        //Variable that changes the positions on the board. These charters are displayed on the tic tac toe board.

        char spots[9] = {'1','2','3','4','5','6','7','8','9'};

            /*
            spots[0]    spots[1]     spots[2]

            spots[3]    spots[4]     spots[5]

            spots[6]    spots[7]    spots[8]
            */

};



#endif //UNTITLED_BOARD_H
