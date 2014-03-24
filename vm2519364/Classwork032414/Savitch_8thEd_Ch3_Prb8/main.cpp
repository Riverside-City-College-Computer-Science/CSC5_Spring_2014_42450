/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 24, 2014, 7:56 AM
 * Purpose:
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Pull first card
    int card=rand()%52, numVal, sum=0;
    char suit1, faceVl;
    //Determine Suit
    if(card<13)suit1='S';
    else if (card<26)suit1='D';
    else if (card<39)suit1='C';
    else suit1='H';
    switch(card%13){
        case 1:faceVl='A';numVal=11;break;
        case 2:faceVl='2';numVal=2;break;
        case 3:faceVl='3';numVal=3;break;
        case 4:faceVl='4';numVal=4;break;
        case 5:faceVl='5';numVal=5;break;
        case 6:faceVl='6';numVal=6;break;
        case 7:faceVl='7';numVal=7;break;
        case 8:faceVl='8';numVal=8;break;
        case 9:faceVl='9';numVal=9;break;
        case 10:faceVl='T';numVal=10;break;
        case 11:faceVl='J';numVal=10;break;
        case 12:faceVl='Q';numVal=10;break;
        case 13:faceVl='K';numVal=10;break;
    }
    sum+=numVal;
//Print the 1st card pulled
    cout<<"the sum of your cards = "<<sum<<endl;
    cout<<"The first card you pulled was ";
    cout<<faceVl<<suit1<<endl;
    return 0;
}

