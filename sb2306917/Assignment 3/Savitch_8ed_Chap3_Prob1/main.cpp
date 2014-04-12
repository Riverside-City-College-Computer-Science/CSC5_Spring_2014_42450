/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 26, 2014, 10:29 PM
 * Purpose: Assignment 3
 */

//Include system libraries
#include <cstdlib>//I/O stream
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string turn1, turn2;
    //Prompt to start game and choose
    cout<<"Time to play Rock, Paper, Scissors!"<<endl;
    cout<<"Player 1, choose R, P, or S"<<endl;
    cin>>turn1;
    cout<<"Player 2, choose R, P, or S"<<endl;
    cin>>turn2;
    //determine who wins: R beats S, P beats R, S beats P
    if((turn1=="R"||turn1=="r")&&(turn2=="R"||turn2=="r")){
        cout<<"Nobody wins"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="R"||turn1=="r")&&(turn2=="P"||turn2=="p")){
        cout<<"Player 2 wins!"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="R"||turn1=="r")&&(turn2=="S"||turn2=="s")){
        cout<<"Player 1 wins!"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="P"||turn1=="p")&&(turn2=="R"||turn2=="r")){
        cout<<"Player 1 wins!"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="P"||turn1=="p")&&(turn2=="P"||turn2=="p")){
        cout<<"Nobody wins"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="P"||turn1=="p")&&(turn2=="S"||turn2=="s")){
        cout<<"Player 2 wins!"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="S"||turn1=="s")&&(turn2=="R"||turn2=="r")){
        cout<<"Player 2 wins!"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="S"||turn1=="s")&&(turn2=="P"||turn2=="p")){
        cout<<"Player 1 wins!"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    else if((turn1=="S"||turn1=="s")&&(turn2=="S"||turn2=="s")){
        cout<<"Nobody wins"<<endl;
        cout<<"Paper covers Rock, Rock breaks Scissors, Scissors cut Paper."<<endl;      
    }
    cout<<"Thanks for playing."<<endl;
    return 0;
}

