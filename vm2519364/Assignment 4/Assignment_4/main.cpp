/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 5, 2014, 10:11 AM
 * Purpose: Assignment 4 | Savitch 8th Edition Chapter 4
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
    cout<<"1. Savitch 8th Edition Chapter 4 Problem 1"<<endl;
    cout<<"2. Savitch 8th Edition Chapter 4 Problem 2"<<endl;
    cout<<"3. Savitch 8th Edition Chapter 4 Problem 4"<<endl;
    cout<<"4. Savitch 8th Edition Chapter 4 Problem 5"<<endl;
    cout<<"5. Savitch 8th Edition Chapter 4 Problem 6"<<endl;
    cout<<"6. Savitch 8th Edition Chapter 4 Problem 7"<<endl;
    cout<<"7. Savitch 8th Edition Chapter 4 Problem 12"<<endl;
    cout<<"8. Savitch 8th Edition Chapter 4 Problem 14"<<endl;
    cout<<"9. Savitch 8th Edition Chapter 4 Problem 15"<<endl;
    cout<<"10. Savitch 8th Edition Chapter 4 Problem 1"<<endl;
    cin>>choose;
    //Utilize switch to implement the menu
    switch(choose){
        case 1:{
            //Start of Problem 1
            cout<<"Place solution to problem 1 here!"<<endl;
            //Ed of Problem 1
            break;
        }
        case 2:{
            //Start of Problem 2
           cout<<"Place solution to problem 10 here!"<<endl;
           //End of Problem 2
           break;
        }
        case 3:{
            //Start of Problem 4
            cout<<"Place solution to problem 23 here!"<<endl;
            //End of Problem 4
            break;
        }
        case 4:{
            //Start of Problem 5
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 5
            break;
        }
        case 5:{
            //Start of Problem 6
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 6
            break;
        }
        case 6:{
            //Start of Problem 7
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 7
            break;
        }
        case 7:{
            //Start of Problem 12
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 12
            break;
        }
        case 8:{
            //Start of Problem 14
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 14
            break;
        }
        case 9:{
            //Start of Problem 15
            cout<<"Place solution to problem 9 here!"<<endl;
            //End of Problem 15
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

