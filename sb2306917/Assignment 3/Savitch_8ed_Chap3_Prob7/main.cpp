/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 24, 2014, 8:52 AM
 * Purpose:Convert year to roman numeral
 */

//System libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare random number/choose a year and output
    int year=rand()%2001+1000;//range from [1000,3000]
    cout<<"If the date is "<<year<<endl;
    //declare and calculate how many 1000's, 100's, 10's and 1's
    int n1000s,n100s,n10s,n1s;
    n1000s=year/1000;
    year-=(n1000s*1000);
    n100s=year/100;
    year-=(n100s*100);
    n10s=year/10;
    year-=(n10s*10);
    n1s=year;
    //output the number of 1000's in roman numnerals
    switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
     //output the number of 100's in roman numnerals
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"CCC";break;
        case 2:cout<<"CC";break;
        case 1:cout<<"C";break;
    }
    //output the number of 10's in roman numnerals
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"XXX";break;
        case 2:cout<<"XX";break;
        case 1:cout<<"X";break;
    }     
     //output the number of 1's in roman numnerals
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"III";break;
        case 2:cout<<"II";break;
        case 1:cout<<"I";break;    
    }
    //Exit stage right
    
    
        

    return 0;
}

