/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 30, 2014, 8:05 AM
 * Purpose: Funny/Ugly numbers in class
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int divOut(int,int);
void divOut2(int&,int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    int number=210;
    //Remove all the 2's
    number=divOut(number,2);
    divOut2(number,3);
    number=divOut(number,5);
    //output number
    cout<<number<<endl;
    //Exit Stage Right!!
    return 0;
}
int divOut(int x,int d){
    while(x%d==0)x/=d;
    return x;
}
void divOut2(int &x,int d){
    while(x%d==0)x/=d;
}