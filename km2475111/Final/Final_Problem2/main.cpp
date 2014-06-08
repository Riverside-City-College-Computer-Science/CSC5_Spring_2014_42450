/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 6, 2014, 8:16 PM
 * Prupose: CSC5 Final
 */
/*
Problem 2
Write a program that plays the game "Guess the
Number" as follows.  Your program chooses the
number to be guessed by selecting an integer
at random in the range 1 to 1000.  The program
display

I have a number between 1 and 1000
Can you guess my number?  You will be
given a maximum of 10 guesses.
Please type your first guess.

The player then types a guess.  The
program responds with one of the following.

1. Congratulations, You guessed the number!
   Would you like to play again(y or n)?
2. Too low.  Try again.
3. Too High. Try again.
4. Too many tries.
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Functions Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set rand
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    unsigned int number=rand()%1000+1;//range of 1-1000
    unsigned int guess,tries=0;
    bool cntLoop=true;
    //check to see if the guess is close to rand num
    while(cntLoop){
        //ask player for guess
        cout<<"Guess a number between 1-1000: ";
        cin>>guess;
        cin.ignore();
        if(tries>=10){
            break;
        }
        if(guess>number) {
            cout<<"Too high! Try again."<<endl;
        }else if(guess<number) {
            cout<<"Too low! Try again."<<endl;
        }else{
            break;
        }
        tries++;
    }
    // Check for tries.
    if(tries>=10){
        cout << "You ran out of tries! Game Over."<<endl<<endl;
    }else{
        // Or, user won.
        cout<<"Congratulations!!"<<endl
            <<"You got the number in "<<tries<<" tries!"<<endl;
    }
    //Exit Stage Right!!
    return 0;
}

