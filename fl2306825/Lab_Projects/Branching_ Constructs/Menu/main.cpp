/* 
 * File:   main.cpp
 * Author: Frank Luna
 *Purpose:how to create menu
 * Created on March 19, 2014, 10:11 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constant

//Function prototype

//Execution starts here!!
int main(int argc, char** argv) {
    //Declare variables
unsigned short choose;
//prompt user for number of problem to execute
cout << "Choose from the following list" << endl;
cout << "1. Problem 1" << endl;
cout << "2. Problem 2" << endl;
cout << "3. Problem 3" << endl;
cout << "4. Problem 4" << endl;
cin >> choose;
//Utilize switch to implement the menu
switch(choose){
    case 1:{
        cout << "Place solution to 1 here" << endl;
    }
    case 2:{
        cout << "Place solution to 2 here" << endl;
    }
    case 3:{
        cout << "Place solution to 3 here" << endl;
    }
    case 4:{
        cout << "Place solution to 4 here" << endl;
    }
    default:{
        cout << "not an option" << endl;
    }
    }


    return 0;
}

