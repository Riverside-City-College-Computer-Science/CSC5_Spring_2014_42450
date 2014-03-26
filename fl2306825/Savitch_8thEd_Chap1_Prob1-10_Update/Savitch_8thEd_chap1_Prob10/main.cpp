/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 3, 2014, 7:50 AM
 */

/*
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare Variable
    char letter;
    
    //Prompt the user what character to use
    cout << "What Character do you want to output for a large C?"<< endl;
    cin >> letter;
    cout << endl;
       
    //Output a Big C
    cout << "  " << letter << letter << letter << endl;
    cout << letter << "     " << letter << endl;
    cout << letter << endl;
    cout << letter << endl;
    cout << letter << endl;
    cout << letter << endl;
    cout << letter << "     " << letter << endl;
    cout << "  " << letter << letter << letter << endl;
           
    return 0;
}

