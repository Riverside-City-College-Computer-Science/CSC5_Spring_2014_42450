/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 24, 2014, 7:56 AM
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {

    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Put first card
    int card=rand()%52, numVal, sum=0;
    char suit,faceVal;
    if(card<13)suit='S';
    else if (card<26)suit='D';
    else if (card<39)suit='C';
    else suit='H';
    switch(card%13+1)
    {
        case 1:faceVal='A';numVal=11;break;
        case 2:faceVal='2';numVal=2;break;
        case 3:faceVal='3';numVal=3;break;
        case 4:faceVal='4';numVal=4;break;
        case 5:faceVal='5';numVal=5;break;
        case 6:faceVal='6';numVal=6;break;
        case 7:faceVal='7';numVal=7;break;
        case 8:faceVal='8';numVal=8;break;
        case 9:faceVal='9';numVal=9;break;
        case 10:faceVal='T';numVal=10;break;
        case 11:faceVal='J';numVal=10;break;
        case 12:faceVal='Q';numVal=10;break;
        case 13:faceVal='K';numVal=10;break;
    }
    sum+=numVal;
    //Print the 1st card pulled
    cout<<"The Sum of your Cards "<<sum<<endl;
    cout<<"The Fist card you pulled was ";
    cout<<faceVal<<suit<<endl;
    return 0;
}

