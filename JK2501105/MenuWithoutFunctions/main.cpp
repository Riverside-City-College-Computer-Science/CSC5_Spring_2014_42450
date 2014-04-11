/* 
 * File:   main.cpp
 * Author: Julio
 * Created on April 9, 2014, 7:56 AM
 */

//System Libraries
#include <cstdlib> //Random function srand
#include <iostream> //Standard i/o
#include <fstream> //file i/o
#include <ctime> //time for random and program
#include <iomanip> //Formatting
#include <cmath> //Math Functions
using namespace std;

//Global constans
//If not a Global Constant get an F

//Function Protoypes
void problem1();
void problem2();
void problem3();

//Execution starts here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output Menu
        cout<<"Choose from the menu\n";
        cout<<"1. Gaddis/Savitch Prob X Chap A\n";
        cout<<"2. Gaddis/Savitch Prob Y Chap B\n";
        cout<<"3. Gaddis/Savitch Prob Z Chap C\n";
        cout<<"Anything else Exit\n";
        //input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            default: exitMnu=true;
        }
    }while(!exitMnu);
    return 0;
}

void problem1(){
cout<<"Put solution to choice 1 here";
               }
void problem2(){
    cout<<"Put solution to choice 2 here";
               }
void problem3(){
    cout<<"Put solution to choice 3 here";
               }