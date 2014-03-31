/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2014, 8:52 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constant

//Function prototype

//Execution Ends here!!
int main(int argc, char** argv) {
   
    //Declare char
    char ans;
    do
    {
//Set random number seed
srand(static_cast<unsigned int>(time(0)));

//Declare the random number/Choose a year
int year = rand()%2001 + 1000;//[1000,3000]
//Declare and calculate, how many 1000's,
//100's,10's,1's

cout << "The year is: " << year << endl;
int n1000s, n100s, n10s, n1s;
n1000s = year / 1000;
year -= (n1000s* 1000);
n100s = year / 100;
year -= (n100s * 100);
n10s = year / 10;
year -= (n10s * 10);
n1s = year;



//Output the number of 1000's
switch(n1000s){
    case 3: cout << 'M';
    case 2: cout << 'M';
    case 1: cout << 'M';
}
//Output the number of 100's in Roman numerals
switch(n100s){
    case 9: cout << "CM"; break;
    case 8: cout << "DCCC"; break;
    case 7: cout << "DCC"; break;
    case 6: cout << "DC"; break;
    case 5: cout << "D"; break;
    case 4: cout << "CD"; break;
    case 3: cout << "C";
    case 2: cout << "C";
    case 1: cout << "C";
}
//Output the numbers of 10's
switch(n10s){
    case 9: cout << "XC"; break;
    case 8: cout << "LXXX"; break;
    case 7: cout << "LXX"; break;
    case 6: cout << "LX"; break;
    case 5: cout << "L"; break;
    case 4: cout << "XL"; break;
    case 3: cout << "X";
    case 2: cout << "X";
    case 1: cout << "X";
}
//Output 1's
    switch(n1s){
    case 9: cout << "IX"; break;
    case 8: cout << "VIII"; break;
    case 7: cout << "VII"; break;
    case 6: cout << "VI"; break;
    case 5: cout << "V"; break;
    case 4: cout << "IV"; break;
    case 3: cout << "I";
    case 2: cout << "I";
    case 1: cout << "I";
    }
    //Looping
    cout << "\nAgain?\ny = Yes\nn = No\n";
    cin >> ans;
    }while(tolower(ans) == 'y');
//Exit stage right
    return 0;
}

