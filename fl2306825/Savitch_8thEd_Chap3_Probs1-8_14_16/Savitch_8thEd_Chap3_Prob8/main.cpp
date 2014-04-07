/* 
 * File:   main.cpp
    * Author: Frank Luna
 *
 * Created on March 24, 2014, 7:55 AM
 */

//System Libraries
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    char ans;
    //Set random number seed
    do
    {
    srand(static_cast<unsigned int>(time(0)));
    //Pull first card
    int card = rand()%52,numVal, sum = 0;
    char suit, faceVl;
   
    
    if(card < 13) suit = 'S';
    else if(card < 26) suit = 'D';
    else if(card < 39)suit = 'C';
    else suit = 'H';
    
    switch(card %13 + 1){
        case 1: faceVl = 'A'; numVal = 11; break;
        case 2: faceVl = '2';numVal = 2; break;
        case 3: faceVl = '3';numVal = 3; break;
        case 4: faceVl = '4';numVal = 4; break;
        case 5: faceVl = '5';numVal = 5; break;
        case 6: faceVl = '6';numVal = 6; break;
        case 7: faceVl = '7';numVal = 7; break;
        case 8: faceVl = '8';numVal = 8; break;
        case 9: faceVl = '9';numVal = 9; break;
        case 10: faceVl = 'T';numVal = 10; break;
        case 11: faceVl = 'J';numVal = 10; break;
        case 12: faceVl = '2';numVal = 2; break;
        case 13: faceVl = '2';numVal = 2; break;
    }
    sum += numVal;
    
    //Print
    cout << "The sum of your cards = " << sum << endl;
    cout << "The first card you pulled was ";
    cout << faceVl << suit << endl;
    //****************************************************************************
    
    //Pull second card
    card = rand()%52;
    //Determine suit
    if(card < 13) suit = 'S';
    else if(card < 26) suit = 'D';
    else if(card < 39)suit = 'C';
    else suit = 'H';
    
    switch(card%13 + 1){
        case 1: faceVl = 'A'; numVal = 11; break;
        case 2: faceVl = '2';numVal = 2; break;
        case 3: faceVl = '3';numVal = 3; break;
        case 4: faceVl = '4';numVal = 4; break;
        case 5: faceVl = '5';numVal = 5; break;
        case 6: faceVl = '6';numVal = 6; break;
        case 7: faceVl = '7';numVal = 7; break;
        case 8: faceVl = '8';numVal = 8; break;
        case 9: faceVl = '9';numVal = 9; break;
        case 10: faceVl = 'T';numVal = 10; break;
        case 11: faceVl = 'J';numVal = 10; break;
        case 12: faceVl = '2';numVal = 2; break;
        case 13: faceVl = '2';numVal = 2; break;
    }
    sum += numVal;
    
    //Print
    cout << "The sum of your cards = " << sum << endl;
    cout << "The second card you pulled was ";
    cout << faceVl << suit << endl;
    
   //Looping
    cout << "\nWould you like to try again?\ny = Yes\nn = No\n";
    cin >> ans;
    
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
    
    return 0;
}

