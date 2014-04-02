/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 2.31: Write a program that displays the following checkered board pattern.(Run Program)
 *               Your program must use only three output statements, one of each of the following forms: 
 *                            cout << "* ";
 *                            cout << ' ';
 *                            cout << endl;
 *
 * Created on March 25, 2014, 3:04 PM
 */
//Systme Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    
     for (int length = 9 ; length>0; --length)
         cout<< "* ";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< " *";
         cout << endl;
         for (int length = 9 ; length>0; --length)
         cout<< "* ";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< " *";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< "* ";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< " *";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< "* ";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< " *";
         cout << endl;
     for (int length = 9 ; length>0; --length)
         cout<< "* ";
         cout << endl;
     
     
     
   
    return 0;
}

