/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 30, 2014, 7:57 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Globals
//Function prototypes
int divOut (int,int);
void divOut2 (int &,int);
//execution
int main(int argc, char** argv) {
    
    int number=1578;
    //Remove all 2,s,3s,5s
    number=divOut(number,2);
    number=divOut(number,3);
    number=divOut(number,5);
    
    cout<<number<<endl;
    
    
    
    
    
    /* int number=10;
    
    while (number%2==0) {
        number=number/2;
    }
    while (number%3==0||number==1) {
        number=number/3;
    }
    while (number%5==0||number==1) {
        number=number/5;
    }
    if (number==1)cout<<number<<" is a funny #."<<endl;
    
  */  
    
    return 0;
}
void divOut2 (int &x ,int d) {
    while(x%d==0)x/=d;
}



int divOut(int x,int d) {
    while(x%d==0)x/=d;
    return x;
}