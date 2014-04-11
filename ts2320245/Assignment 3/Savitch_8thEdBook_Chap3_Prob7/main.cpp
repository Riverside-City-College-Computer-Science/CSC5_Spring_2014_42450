/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on March 24, 2014, 8:53 AM
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
//Set the random seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare the random number/choose a year
    int year=rand()%2001+1000;//[1000,3000]
    cout << "The year is "<< year << endl;
    //Declare and calculate, how many 1000's
    //100's, 10's, and 1's
    int n1000s,n100s,n10s,n1s;
    n1000s=year/1000;
    year-=(n100s*1000);
    n100s=year/100;
    year-=(n100s*100);
    n10s=year/10;
    year-=(n10s*10);
       n1s=year;
    //ouput the number of 1000s in Roman Numerals
            switch (n1000s){
                case 3:cout << 'M';
                case 2: cout << 'M';
                case 1: cout << 'M';
            }
    //Output the number of 100s in roman numerals
            switch (n100s){
                case 9:cout << "CM";break;
                case 8: cout <<"DCCC"; break;
                case 7: cout << "DCC"; break;
                case 6 :cout << "DC"; break;
                case 5 : cout << "D"; break;
                case 4: cout << "CD"; break;
                case 3: cout << "C"; break;
                case 2: cout << "C";
                case 1: cout << "C";
            }
            
            
                //Output the number of 10s in roman numerals
            switch (n10s){
                case 9:cout << "XC";break;
                case 8: cout <<"LXXX"; break;
                case 7: cout << "LXX"; break;
                case 6 :cout << "LX"; break;
                case 5 : cout << "L"; break;
                case 4: cout << "XL"; break;
                case 3: cout << "X"; break;
                case 2: cout << "X";
                case 1: cout << "X";
            }
    
                 //Output the number of 1s in roman numerals
            switch (n1s){
                case 9:cout << "IX";break;
                case 8: cout <<"VIII"; break;
                case 7: cout << "VII"; break;
                case 6 :cout << "VI"; break;
                case 5 : cout << "V"; break;
                case 4: cout << "IV"; break;
                case 3: cout << "I"; break;
                case 2: cout << "I";
                case 1: cout << "I";
            }
   //Exit Stage Right 
    return 0;
}


