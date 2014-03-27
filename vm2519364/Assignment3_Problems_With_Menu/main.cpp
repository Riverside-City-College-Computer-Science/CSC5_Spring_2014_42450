/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 26, 2014, 2:55 PM
 * Purpose: Assignment 3 Problems With Menu.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl;
    cout<<"1. Savitch 8th Edition Chapter 3 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 3 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 3 Problem 3"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 3 Problem 4"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 3 Problem 5"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 3 Problem 6"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 3 Problem 14"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 3 Problem 15"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 3 Problem 16"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 3 Problem 17"<<endl;
    cin>>choose;
    //Utilize switch to implement the menu
    switch(choose){
        case 1:{
            cout<<"Place solution to problem 1 here!"<<endl;
            break;
        }
        case 2:{
           cout<<"Place solution to problem 10 here!"<<endl;
           break;
        }
        case 3:{
            cout<<"Place solution to problem 23 here!"<<endl;
            break;
        }
        case 4:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        case 5:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        case 6:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        case 7:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        case 8:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        case 9:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        case 10:{
            cout<<"Place solution to problem 9 here!"<<endl;
            break;
        }
        default:{
            cout<<"Not an option!"<<endl;
        }
    }



    //Exit Stage Right
    return 0;
}

