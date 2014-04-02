/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 23, 2014, 5:32 PM
 * Purpose: Create a program that outputs a 4digit Arabic number into
 * Roman numerals.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare the random number/choose a year and output
    int year=rand()%2001+1000;//[1000,3000]
    cout<<"The year is "<<year<<endl;
    //Declare and calculate how many 1000's,
    //100's, 10's, and 1's
    int n1000s,n100s,n10s,n1s;
    n1000s=year/1000;
    year-=(n1000s*1000);
    n100s=year/100;
    year-=(n100s*100);
    n10s=year/10;
    year-=(n10s*10);
    n1s=year;
    //Output the number of 1000s in Roman Numerals
    switch(n1000s){
        case 3:cout<<'M';
        case 2:cout<<'M';
        case 1:cout<<'M';
    }
    //Output the number of 100's in Roman Numerals
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    //Output the number of 10's in Roman Numerals
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
    //Output the number of 1's in Roman Numerals
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    //Exit Stage Right

    return 0;
}