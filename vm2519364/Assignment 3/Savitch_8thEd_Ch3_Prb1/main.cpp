/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 16, 2014, 10:09 PM
 * Purpose: Paper, Rock, Scissors Game
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char playr1, playr2, ans;
   do{ 
    cout<<"\n";   
    cout<<"Let's play paper-rock-scissors.\n";
    cout<<"\n";
    cout<<"Enter p for paper, r for rock, and s for scissors.\n";
    cout<<"\n";
    cout<<"Player 1 make your selection: ";
    cin>>playr1;
    cout<<"\n";
    cout<<"Player 2 make your selection: ";
    cin>>playr2;
    cout<<"\n";
    //Player 1 Rock Selection
    
    if (playr1 == 'r' || playr1 == 'R')
    {
        if(playr2 == 'r' || playr2 == 'R')
            cout<<"Nobody wins, tie game.\n";
    
        if(playr2 == 'p' || playr2 == 'P')
            cout<<"Player 2 wins! Paper covers rock.\n";
    
        if(playr2 == 's' || playr2 == 'S')
            cout<<"Player 1 wins! Rock breaks scissors.\n";
    }else
            cout<<"";
    
    //Player 1 Paper Selection  
    
    if (playr1 == 'p' || playr1 == 'P')
    {
        if(playr2 == 'r' || playr2 == 'R')
            cout<<"Player 1 wins! Paper covers rock.\n";
    
        if(playr2 == 'p' || playr2 == 'P')
            cout<<"Nobody wins, tie game.\n";
    
        if(playr2 == 's' || playr2 == 'S')
            cout<<"Player 2 wins! Scissors cut paper.\n";
        }else
            cout<<"";
    
    //Player 1 Scissor Selection
    
    if (playr1 == 's' || playr1 == 'S')
    {
        if(playr2 == 'r' || playr2 == 'R')
            cout<<"Player 2 wins! Rock breaks scissors.\n";
    
        if(playr2 == 'p' || playr2 == 'P')
            cout<<"Player 1 wins! Scissors cut paper.\n";
    
        if(playr2 == 's' || playr2 == 'S')
            cout<<"Nobody wins, tie game.\n";
        }else
            cout<<"";
     
    
         cout<<"\n";
         cout<<"Would you like to play again?\n";
         cout<<"\n";
         cout<<"Enter y for yes, n for no: ";
         cin>>ans;
         cout<<"\n";
     } while ( ans == 'y'|| ans == 'Y');

    cout<<"Good game! See you next time.\n";
    //Exit Stage Right
    return 0;
}