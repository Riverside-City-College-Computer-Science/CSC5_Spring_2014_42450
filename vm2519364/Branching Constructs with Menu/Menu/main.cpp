/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 19, 2014, 10:11 AM
 * Purpose: How to create a menu
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
    cout<<"2. Gaddis 8th Edition Chapter 4 Problem 10"<<endl;
    cout<<"3. Deitel 8th Edition Chapter 2 Problem 23"<<endl;
    cout<<"4. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
    cout<<"5. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
    cout<<"6. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
    cout<<"7. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
    cout<<"8. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
    cout<<"9. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
    cout<<"10. Eckel 8th Edition Chapter 1 Problem 9"<<endl;
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

