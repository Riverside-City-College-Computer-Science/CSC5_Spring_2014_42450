/* 
 * File:   main.cpp
 * Author: Saldana, Thomas 
 Problem 1.30: Write a program that reads in five integers and determines and prints the 
   largets and the smallest integers in the group. Use only the programing techniques you
   learned in this chapter.
 * Created on February 28, 2014, 3:55 PM
 */

#include <iostream> //Preprocessor Directive

using namespace std;

int main() { //Function
    
    int num1, num2, num3, num4, num5; // Variables that the program is going to be using // Data type "int"
    int number;
    
    cout << "Write five whole numbers, one after another, and I will tell you\n the largest and the smallest in the list."; // Statement terminator is ";" //Prompt
    cin >> num1 >> num2 >> num3 >> num4 >> num5; //read an integer
    
    number = num1; // If the first number inputed by the user is the greatest, this statement will output it.
    
    // this single-selection structure helps the computer determine a largest number. I think.
    if (num2 > number)
        number = num2;
    if ( num3 > number)
        number = num3;
    if ( num4 > number)
        number = num4;
    if ( num5 > number)
        number = num5;
    
     cout << "The largest number of the five numbers you inputed is\n" << number << endl;
     
    // this single selection structure helps the computer determine the smallest # input
     
     number = num1;
     
     if ( num2 < number)
         number = num2;
     if ( num3 < number)
          number = num3;
     if ( num4 < number )
         number = num4;
     if ( num5 < number)
         number = num5 ;
     cout << "the smallest number of the five numbers you inputed is\n" << number;
 
    return 0;
}


