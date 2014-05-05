/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2014, 7:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random  number seed
    srand(static_cast<unsigned int>(time(0)));
    //Pull first card
    int card=rand()%52,sum=0,numVal;
    char suit,faceVl1;
    if (card<13)suit='S';
    else if (card<26)suit='D';
    else if (card<39)suit='C';
    else suit='H';
    switch (card%13+1){
        case 1:faceVl1='A';numVal=11;break;
        case 2:faceVl1='2';numVal=2;break;
        case 3:faceVl1='3';numVal=3;break;
        case 4:faceVl1='4';numVal=4;break;
        case 5:faceVl1='5';numVal=5;break;
        case 6:faceVl1='6';numVal=6;break;
        case 7:faceVl1='7';numVal=7;break;
        case 8:faceVl1='8';numVal=8;break;
        case 9:faceVl1='9';numVal=9;break;
        case 10:faceVl1='T';numVal=10;break;
        case 11:faceVl1='J';numVal=10;break;
        case 12:faceVl1='Q';numVal=10;break;
        case 13:faceVl1='K';numVal=10;break;
    }
    sum+=numVal;
    //print the first card pulled
    cout<<"The sum of your card ="<<sum<<endl;
    cout<<"the first card you pulled was";
    cout<<faceVl1<<suit<<endl;
    
    //Exit stage right!!!
    return 0;
}

