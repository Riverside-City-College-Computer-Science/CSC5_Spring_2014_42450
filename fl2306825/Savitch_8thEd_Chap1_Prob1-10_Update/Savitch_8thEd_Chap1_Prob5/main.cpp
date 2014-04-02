/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on February 25, 2014, 7:04 PM
 */

/*
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {
    
    //Declare Variables
    int add, subtract, answer;
    
    //Custom outputs and inputs
    cout << "Hello. How many hats do you own?\n";
    cin >> add;
    cout << "Now how many do you plan to sell?\n";
    cin >> subtract;
    
    //Hat numb - plan to sell numb = answer
    answer = add - subtract;
    cout << "So in total, you will have ";
    cout << answer;
    cout << " hats.\n";
    cout << "This is the end of the program. Goodbye!\n";
      
    return 0;
}

