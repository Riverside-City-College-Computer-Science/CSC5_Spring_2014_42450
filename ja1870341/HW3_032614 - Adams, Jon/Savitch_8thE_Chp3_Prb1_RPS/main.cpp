/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 29, 2014, 10:55 PM
 */
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Variables
    char player1, player2;
    //Prompt
    cout<<"Lets play rock paper scissors"<<endl;
    cout<<"Player 1, press R for Rock, P, for paper, and S for scissors"<<endl;
    //Player 1 input
    cin>>player1;
    cout<<"Player 2, press R for Rock, P, for paper, and S for scissors"<<endl;
    //Player 2 input
    cin>>player2;
    //Player 1 deciphered first, then player 2. Game ends
    //Rock
    if ((player1=='r')||(player1=='R')) {
        if ((player2=='r')||(player2=='R')) {
            cout<<"You tied!"<<endl;
            return 0;
        }
        if ((player2=='s')||(player2=='S')) {
            cout<<"Player 1 wins with Rock smashing Scissors!"<<endl;  
            return 0;
        }
        if ((player2=='p')||(player2=='P')) {
            cout<<"Player 2 wins with Paper smothering Rock!"<<endl;
            return 0;
        }
        else {
            cout<<"Player2 made an invalid entry!!!"<<endl;
            return 0;
        }
    }
    //Scissors
    else if ((player1=='s')||(player1=='S')) {
        if ((player2=='s')||(player2=='S')) {
            cout<<"You tied!"<<endl;
            return 0;
        }
        if ((player2=='p')||(player2=='P')) {
            cout<<"Player 1 wins with Scissors cutting Paper!"<<endl;  
            return 0;
        }
        if ((player2=='r')||(player2=='R')) {
            cout<<"Player 2 wins with Rock smashing scissors!"<<endl;
            return 0;
        }
        else {
            cout<<"Player2 made an invalid entry!!!"<<endl;
            return 0;
        }
    }
    //Paper
    else if ((player1=='p')||(player1=='P')) {
        if ((player2=='p')||(player2=='P')) {
            cout<<"You tied!"<<endl;
            return 0;
        }
        if ((player2=='r')||(player2=='R')) {
            cout<<"Player 1 wins with Paper smothering Rock!"<<endl;  
            return 0;
        }
        if ((player2=='s')||(player2=='S')) {
            cout<<"Player 2 wins with Scissors cutting Paper!"<<endl;
            return 0;
        }
        else {
            cout<<"Player2 made an invalid entry!!!"<<endl;
            return 0;
        }
    }
    else {
        cout<<"Player1 made an invalid entry!"<<endl;
    }
    cout<<"Game over!"<<endl;
    
    return 0;
}

