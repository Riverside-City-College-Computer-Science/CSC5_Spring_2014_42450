/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 14
 *
 * Created on March 24, 2014, 4:56 PM
 */

//System Libraries
#include<iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main (){

    int x, y; //Declaration of Variables
    
    for (int x =2; x<100; x++) //Repetition Structure
        for (int y =2; y<x; y++)

        {
            if (x % y == 0)// Selection structure // if condition is true
                break;
            else // if condition is false
                if (x == y+1)
                cout << x << " ";
 }   

    return 0;

}