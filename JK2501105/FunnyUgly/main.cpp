/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on April 30, 2014, 8:17 AM
 */

#include <iostream>

using namespace std;


//Global constants

//
int divOut(int,int);
void divOut2(int &,int);



int main(int argc, char** argv) {
    
    //Declare variables
    int number=210;
    //Remove all the 2's,3's,5's
    number=divOut(number,2);
    number=divOut(number,3);
    number=divOut(number,5);
    //Output the results
    cout << number <<endl;
    //Exit stage right
    return 0;
}

void divOut(int &x,int d){
    while(x%d==0)x/=d;
}

int divOut(int x,int d){
    while(x%d==0)x/=d;
    return(0);
}
