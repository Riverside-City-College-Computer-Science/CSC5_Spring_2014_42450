/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 1: Write a program to score the paper-rock-scissor game. Each of two users types
 *            in either P,R, or S. The program then announces the winner as well as the basis 
 *            for determining the winner: Paper covers rock, Rock breaks scissors, Scissors cut
 *            paper,or Nobody wins. Be sure to allow the users to use lowercase as well as 
 *            uppercase letters. Your program should include a loop that lets the user play 
 *            again until the user says she or he is done. 
 *
 * Created on March 20, 2014, 1:54 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Funtion Prototypes

//Execution Starts
int main(int argc, char** argv) {
    
 char P, R, S, p, r, s, choice1, choice2;
    
    cout << "Two players are required for this game. It is a game of rock-paper-scissors.\n";
    cout << "The rules are simple. Each player will be typing in either P (for paper),R (for rock), or S (for scissors).\n"
         << "Paper covers rock, Rock breaks scissors, and Scissors cuts paper.The winner of the two players will be notified by the computer.\n\n";
    
    cout << "Lets Begin...\n\n";
    
    cout << "Player 1, enter either P,R, or S: ";
    cin >> choice1 ;
    cout<<"\n"; 
    
    cout << "Player2, enter either P,R, or S: ";
    cin >> choice2;
    cout<<"\n\n";
    
    choice1 = toupper(choice1);
    choice2 = toupper(choice2);
    
    if ((choice1 == 'P')   &&    (choice2 == 'R'))
        cout << "Player1 Wins!\n"<< endl ;
    
    if ((choice1== 'P') && (choice2== 'S' ))
        cout << "Player2 Wins!"<< endl;
    
    if ((choice1== 'P') && (choice2== 'P'))
        cout << "No One Wins!"<< endl;
    
    if ((choice1== 'R') && (choice2== 'P'))
        cout << "Player2 Wins!"<< endl;
    
    if ((choice1== 'R') && (choice2== 'S'))
        cout << "Player1 Wins!"<<endl;
    
    if ((choice1== 'R') && (choice2== 'R'))
        cout << "No One Wins! "<<endl;
    
    if ((choice1== 'S') && (choice2== 'P'))
        cout << "Player1 Wins! "<<endl;
    
    if ((choice1== 'S') && (choice2== 'R'))
        cout << "Player2 Wins! "<<endl;
    
    if ((choice1== 'S') && (choice2== 'S'))
        cout << "No One Wins! "<< endl;

    
    cout << endl<< endl; 
    cout << "If you want to play again, run the program again.\n\n";
    return 0; 
}

