/* 
 * NAME: Ezra Guinmapang
 * DATE: April 23, 2014
 * PURPOSE: Build a Battleship game
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
#include "Ship.h"
#include "Player.h"
using namespace std;

//Global variables and constants

//Function prototypes

//Execution begins HERE
int main(int argc, char** argv){
    char mChoice;                               //generic variable used to enter user choice
    do{
        //Declare variables
        bool isWinner = false;                  //boolean representing winning the game
        string name;                            //stores the name input for new players
        grid b_Ground;                   //pointer to character map for the basic in-game grid
        cout << "***********************\n";    
        cout << "* B A T T L E S H I P *\n";
        cout << "***********************\n\n";
        cout << "Player, please enter your name: ";
        cin >> name;
        cout << "Welcome, Admiral " << name << ".\n";
        Player *Player1 = new Player(name);             //Create a new Player instance
        cout << "Player, please enter your name: ";     
        cin >> name;
        cout << "Welcome, Admiral " << name << ".\n";
        Player *Player2 = new Player(name);             //Create a new Player instance
        b_Ground = Player1->P_Grid();                   //set the pointer to current Player's placement grid
        Player1->Display(b_Ground);                     //display current Player's placement grid
        Player1->C_Ships();                     //choose the ships to place in the current Player's placement grid
        b_Ground = Player2->P_Grid();                   //set the pointer to current Opponent's grid
        Player2->Display(b_Ground);                     //display current Opponent's grid
        Player2->C_Ships();                     //choose the ships to place in the current Opponent's placement grid
        while(!isWinner){                               //loop through each Player's turn while there is no winner
            cout << Player1->Name() << "'s turn:\n";    //initiate the current Player's turn
            b_Ground = Player1->S_Grid();               //set the pointer to the current Player's shot grid
            Player1->Display(b_Ground);                 //display the current Player's shot grid
            Player1->Volley(Player2->P_Grid());         //current Player's shot, to be registered in current Player's shot grid and current Opponent's placement grid
            Player1->Impact(Player1->Shot(), Player2->Fleet());         //evaluates the shot - either a hit or a miss
            isWinner = Player1->Victory(Player2->SunkSize(), Player2->P_Grid());           //sets the isWinner boolean to TRUE if the current Player has sunk ALL current Opponent's Ships
            isWinner = Player1->Victory(Player2->SunkSize(), Player2->P_Grid());           //sets the isWinner boolean to TRUE if the current Player has sunk ALL current Opponent's Ships
            if(isWinner) break;                         //break out of the loop if current Player is the Winner
            do{
                cin.ignore();
                cout << "Please press ENTER to end your turn..."; 
            }while(cin.get() != '\n');                  //press Enter to end player's turn 
            cout << Player2->Name() << "'s turn:\n";    //initiate the current Opponent's turn
            b_Ground = Player2->S_Grid();               //set the pointer to current Player's shot grid
            Player2->Display(b_Ground);                 //display current Player's shot grid
            Player2->Volley(Player1->P_Grid());         //current Opponent's shot, to be registered in current Opponent's shot grid and current Player's placement grid
            Player1->Impact(Player2->Shot(), Player1->Fleet());         //evaluates the shot - either a hit or a miss
            isWinner = Player2->Victory(Player1->SunkSize(), Player1->P_Grid());           //sets the isWinner boolean to TRUE if the current Player has sunk ALL current Opponent's Ships
            if(isWinner) break;                         //break out of the loop if current Player is the Winner
            do{
                cin.ignore();
                cout << "Please press ENTER to end your turn..."; 
            }while(cin.get() != '\n');                  //press Enter to end player's turn 
        }
        delete Player1;                                 //delete Player instance
        delete Player2;                                 //delete Player instance 
        cout << "Would you like a new game(Y/N)? ";     //pause and ask whether to initiate a new game (Enter 'Y) or Exit Battleship altogether (Enter any key except 'Y')
        cin >> mChoice;                                 //enter Player's or Opponent's choice
    }while(toupper(mChoice) == 'Y');                    //break if Player enters any other input except 'Y'
    cout << "Exiting Naval Battle Simulator. Goodbye!\n";               //Goodbye!
    //Execution ends HERE
    return 0;
}