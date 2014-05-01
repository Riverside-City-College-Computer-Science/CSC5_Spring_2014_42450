/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 30, 2014, 8:02 AM
 * Ugly Number Sequence
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes
int divOut(int, int);//One way of doing it
void divOut2(int&, int);//Another way of doing it

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int number=210; 
    //Remove all the 2's
    //while(number%2==0)number/=2;
    //while(number%3==0)number/=3;
    //while(number%5==0)number/=5;
    //Remove all the 2's 3's, 5's
    number=divOut(number, 2);
    divOut2(number, 3);
    number=divOut(number, 5);
    //Output the results
    cout<<number<<endl;  
    
    //Exit Stage Right
    return 0;
}

void divOut2(int& x, int d){
    while(x%d==0)x/=d;
}

int divOut(int x, int d){
    while(x%d==0)x/=d;
    return x;
}