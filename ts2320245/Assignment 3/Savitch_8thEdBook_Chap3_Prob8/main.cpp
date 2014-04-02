
/* 
 * File:   main.cpp
 * Author: Saldana, Thomas 
 * Problem 8:
 *
 * Created on March 24, 2014, 7:55 AM
 */
// System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
// Set the random number seed
    
    srand (static_cast<unsigned int> (time(0)));
    // Pull first card
    int card1=rand ()%52,numV1, sum=0;
    char suit1, faceV1;
    if (card1<13)suit1= 'S';
    else if (card1<26)suit1='D';
    else if (card1<39) suit1='C';
    else suit1='H';
    switch (card1%13+1){
            case 1: faceV1= 'A'; numV1=11;break;
            case 2: faceV1= '2';numV1=2;break;
            case 3: faceV1= '3';numV1=3;break;
            case 4: faceV1= '4';numV1=4;break;
            case 5: faceV1= '5';numV1=5;break;
            case 6: faceV1= '6';numV1=6;break;
            case 7: faceV1= '7';numV1=7;break;  
            case 8: faceV1= '8';numV1=8;break; 
            case 9: faceV1= '9';numV1=9;break;
            case 10: faceV1= 'T';numV1=10;break;
            case 11: faceV1= 'J';numV1=10;break;
            case 12: faceV1= 'Q';numV1=10;break;
            case 13: faceV1= 'K';numV1=10;break;}
    sum+=numV1;
    cout << "The sum of your cards = " << sum << endl;
    cout << "The first \"card\" you pulled was ";
    cout << faceV1<< suit1<< endl;
                   
    
    
    return 0;
}

