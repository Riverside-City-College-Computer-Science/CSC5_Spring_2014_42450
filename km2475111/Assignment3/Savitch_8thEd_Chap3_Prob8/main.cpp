/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * 
 * Created on March 26, 2014, 7:23 PM
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
    int card=rand()%52,numVal,sum=0;
    char suit,faceVl;
    //Determine Suit
    if(card<13)suit='S';
    else if(card<26)suit='D';
    else if(card<39)suit='C';
    else suit='H';
    switch(card%13+1){
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
    cout<<"The sum of your cards = "<<sum<<endl;
    cout<<"The first card you pulled was ";
    cout<<faceVl<<suit<<endl;
    //Pull second card
    card=rand()%52;
    //Determine Suit
    if(card<13)suit='S';
    else if(card<26)suit='D';
    else if(card<39)suit='C';
    else suit='H';
    switch(card%13+1){
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
    cout<<"The sum of your cards = "<<sum<<endl;
    cout<<"The second card you pulled was ";
    cout<<faceVl<<suit<<endl;
    //Exit Stage Right!!
    return 0;
}

