/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 19, 2014, 10:11 AM
 * Purpose: How to create a menu
 */

//system libraries
#include <iostream>

using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    unsigned short choose;
    //prompt user for number of problem to execute
    cout<<"Choose form the following,list"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 3 Problem 1"<<endl;
    cout<<"2. Gaddis 7th Edition Chapter 4 Problem 10"<<endl;
    cout<<"3. Deitel 8th Edition Chapter 3 Problem 23"<<endl;
    cout<<"4. Eckel 3rd Edition Chapter 1 Problem 9"<<endl;
    cin>>choose;
    //utilize switch to implement the menu
    switch(choose){
        case 1:{
            cout<<"Place solution to problem 1"<<endl;
            break;
         }
        case 2:{
            cout<<"Place solution to problem 10"<<endl;
            break;
        }
        case 3:{
            cout<<"Place problem to solution 23"<<endl;
            break;
        }
        case 4:{
            cout<<"Place problem to solution 9"<<endl;
            break;
        }
        default:{
            cout<<"Not an option!"<<endl;
        }
    }
    

    return 0;
}

