/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 20, 2014, 11:15 PM
 */

//System Libraries
#include <iostream>
#include<string>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    char pla1, pla2,ans;
    
    do
    {
    //Player 1's input
    cout << "Welcome to rock, paper, scissor. Player 1, please choose either "
            "Letters.\nR. Rock\n\nP. Paper\n\nS.Scissor\n\n";
    cin >> pla1;
 
    //Player 2's input
    cout << "Now it's players 2 turn to choose.\n\n";
    cin >> pla2;
    
    //If statements
    if(pla1 == 'r' || pla1 == 'R')//--------------------------------------------
    {
        if(pla2 == 'p' || pla2 == 'P')//p
        {
          cout << "Player 2 wins. Paper beats rock.\n";  
        }
        if(pla2 == 's' || pla2 == 'S')//s
        {
            cout << "Player 1 wins. Rock beats scissor.\n";
        }
        if(pla2 =='r' || pla2 == 'R')//r
        {
            cout << "Tie game.\n";
        }
    }
    else if (pla1 == 'p' || pla1 == 'P')//--------------------------------------
    {
        if(pla2 == 'p' || pla2 == 'P')//p
        {
          cout << "Tie Game.";  
        }
        if(pla2 == 's' || pla2 == 'S')//s
        {
            cout << "Player 2 wins. Scissor beats paper.";
        }
        if(pla2 =='r' || pla2 == 'R')//r
        {
            cout << "Player 1 wins. Paper beats rock.\n";
        }
    }
    else if (pla1 == 's' || pla1 == 'S')//--------------------------------------
    {
        if(pla2 == 'p' || pla2 == 'P')//p
        {
          cout << "Player 2 wins. Paper beats rock.\n";  
        }
        if(pla2 == 's' || pla2 == 'S')//s
        {
            cout << "Tie game.\n";
        }
        if(pla2 =='r' || pla2 == 'R')//r
        {
            cout << "Player 2 wins. Rock beats scissor\n";
        }
    }
    cout << "Do you want to play again?\ny = Yes\nn = No\n";
    cin >> ans;
    }while(ans == 'y' || ans == 'Y');
    cout << "Goodbye!";

    //Execution ends here
    return 0;
}

