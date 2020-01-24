#include <iostream>
#include "Player.h"
#include "Board.h"
#include <string>
using namespace std;

int main() {

    //Initializing Board Object
    Board b1;

    //Starting Prompt to gather information on players
    cout << "Player one. Enter your full name separated by a space." << endl;

    //Keeps track of fullname
    string fullname;

    getline(cin, fullname);

    Player p1 (fullname);
    p1.setPiece('x');

    cout << "Player two. Enter your full name separated by a space." << endl;
    getline(cin, fullname);

    Player p2 (fullname);
    p2.setPiece('o');

    //Prompt asking for who must go first.
    cout << "Which player is going to play first? (Enter 1 or 2) " << endl;
    cout << "Player 1: " << p1.fullName << "    or    ";
    cout << "Player 2: " << p2.fullName << endl;
    //Variable to keep track of who's going first.
    int whoFirst;
    cin >> whoFirst;
    if (whoFirst == 1){
        p1.turn = 1;
    }
    else{
        p2.turn = 1;
    }

    //Variable keeps track if a game is in session
    bool game = true;


    //Loop for Game in session.
    while(game) {

        b1.printBoard();

        //Number to keep track of the selection.
        int move;

        //Program flow if p1 is selected for first turn.
        if (p1.turn) {

            //Selection for Player One
            cout << "Choose a spot with a number to play. Player One (" << p1.first << ") it's your turn." << endl;
            cin >> move;
            b1.changeSpots(move,p1.piece);



            //Check to see if player one has won or drawn the game and act accordingly.
            if (b1.checkWin() || b1.checkDraw()) {

                if (b1.checkWin()) {
                    //Logic if player one wins
                    b1.changeBcWin();
                    p1.wins = p1.wins + 1;
                    p2.losses = p2.losses + 1;
                    p1.printStats();
                    p2.printStats();

                    //checks to see if another game is going to be played.
                    if (b1.anotherGame()) {
                        p1.turn = 0;
                        p2.turn = 1;
                        b1.resetBoard();
                        continue;
                    } else {
                        return 0;
                    }

                } else {
                    //logic if player one calls the game to a draw.
                    p1.draws = p1.draws + 1;
                    p2.draws = p2.draws + 1;
                    p1.printStats();
                    p2.printStats();

                    //Resets the fame if another game is to be played and changes who is supposed to go first for next game.
                    if (b1.anotherGame()) {
                        b1.resetBoard();
                        //checks to see who went first last game and changes it.
                        if (p1.turn == 1) {
                            p2.turn = 1;
                            p1.turn = 0;
                        } else {
                            p2.turn = 0;
                            p1.turn = 1;
                        }
                        continue;
                    } else {
                        //return 0;
                        //EMD GAME

                    }
                }
            }


                //Player one selection printed to screen.
                b1.printBoard();

                //If no win on previous move or no draw. Player two is asked to play.
                cout << "Choose a spot with a number to play. Player Two (" << p2.first << ") it's your turn." << endl;
                cin >> move;

                //Board is changed and printed to screen.
                b1.changeSpots(move, p2.piece);


                //Check to see if player two drew the game or won.
                if (b1.checkWin() || b1.checkDraw()) {
                    if (b1.checkWin()) {
                        b1.changeBcWin();
                        p2.wins = p2.wins + 1;
                        p1.losses = p1.losses + 1;
                        p1.printStats();
                        p2.printStats();

                        if (b1.anotherGame()) {
                            p1.turn = 1;
                            p2.turn = 0;
                            b1.resetBoard();
                            continue;
                        } else {
                            return 0;
                        }

                    } else {
                        p1.draws = p1.draws + 1;
                        p2.draws = p2.draws + 1;
                        p1.printStats();
                        p2.printStats();
                        if (b1.anotherGame()) {
                            b1.resetBoard();
                            //checks to see who went first last game and changes it.
                            if (p1.turn == 1) {
                                p2.turn = 1;
                                p1.turn = 0;
                            } else {
                                p2.turn = 0;
                                p1.turn = 1;
                            }
                            continue;
                        } else {
                            //return 0;
                            //EMD GAME

                        }
                    }


                }
            }
        else {
                cout << "Choose a spot with a number to play. Player Two (" << p2.first << ") it's your turn." << endl;
                cin >> move;
                b1.changeSpots(move, p2.piece);


                //Check to see if Player two has ended the game with last move.
                if (b1.checkWin() || b1.checkDraw()) {
                    //If player two wins then we must add wins and losses accordingly.
                    if (b1.checkWin()) {
                        b1.changeBcWin();
                        p2.wins = p2.wins + 1;
                        p1.losses = p1.losses + 1;
                        p1.printStats();
                        p2.printStats();

                        if (b1.anotherGame()) {
                            p1.turn = 1;
                            p2.turn = 0;
                            b1.resetBoard();
                            continue;
                        } else {
                            return 0;
                        }

                    } else {
                        p1.draws = p1.draws + 1;
                        p2.draws = p2.draws + 1;
                        p1.printStats();
                        p2.printStats();


                        if (b1.anotherGame()) {
                            b1.resetBoard();
                            //checks to see who went first last game and changes it.
                            if (p1.turn == 1) {
                                p2.turn = 1;
                                p1.turn = 0;
                            } else {
                                p2.turn = 0;
                                p1.turn = 1;
                            }
                            continue;
                        } else {
                            //return 0;
                            //EMD GAME

                        }
                    }
                    //Prompt for second game
                }

                //Prints board after win check.
                b1.printBoard();

                cout << "Choose a spot with a number to play. Player One (" << p1.first << ") it's your turn." << endl;
                cin >> move;
                b1.changeSpots(move, p1.piece);
                

                //Checks to see if PLayer Two has ended the game.
                if (b1.checkWin() || b1.checkDraw()) {
                    //If won or draw. This updates statistics
                    if (b1.checkWin()) {
                        b1.changeBcWin();
                        b1.printBoard();
                        p1.wins = p1.wins + 1;
                        p2.losses = p2.losses + 1;
                        p1.printStats();
                        p2.printStats();

                        if (b1.anotherGame()) {
                            p1.turn = 0;
                            p2.turn = 1;
                            b1.resetBoard();
                            continue;
                        } else {
                            return 0;
                        }

                    } else {
                        p1.draws = p1.draws + 1;
                        p2.draws = p2.draws + 1;
                        p1.printStats();
                        p2.printStats();

                        if (b1.anotherGame()) {
                            b1.resetBoard();
                            //checks to see who went first last game and changes it.
                            if (p1.turn == 1) {
                                p2.turn = 1;
                                p1.turn = 0;
                            } else {
                                p2.turn = 0;
                                p1.turn = 1;
                            }
                            continue;
                        } else {
                            //return 0;
                            //EMD GAME

                        }
                    }
                    //Prompt for second game
                }


            }
        }

    }


