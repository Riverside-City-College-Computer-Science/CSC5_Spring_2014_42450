/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on March 19, 2014, 8:32 AM
 */

#include <iostream>//I/O stream
using namespace std;

//Global Variables

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choose;
    //Prompt user for number of problem to execute
    cout<<"Choose from the following list"<<endl
        <<"1. Savitch 8th Edition Chapter 3 Problem 1"<<endl
        <<"2. Gaddis  6th Edition Chapter 3 Problem 10"<<endl
        <<"3. Deitel  7th Edition Chapter 3 Problem 23"<<endl
        <<"4. Eckel   3rd Edition Chapter 3 Problem 9"<<endl;
    cin>>choose;
    //utilize switch to implement the menu
    switch(choose){
        case 1:{
            cout<<"PLace solution to 1 here!"<<endl;break;
        }
        case 2:{
            cout<<"Place solution to 10 here!"<<endl;break;
        }
        case 3:{
            cout<<"Place solution to 23 here!"<<endl;break;
        }
        case 4:{
            cout<<"Place solution to 9 here!"<<endl;break;
        }
        default:{
            cout<<"Not an option!"<<endl;
        }
        
    }
    
    //Exit Stage Right!!
    return 0;
}