/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 9, 2014, 8:13 AM
 */

//System Libraries
//take out if not needed
#include <cstdlib>//Random function srad
#include <iostream>//Standard input/ouput
#include <fstream>//file input/ouput
#include <ctime>//time for random and program
#include <iomanip>//formating
#include <cmath>//Math functions
using namespace std;

//Global Constants
//if no a global constant get an F

//Function Prototype
void problem1();
void problem2();
void problem3();
//Execution Start Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output Menu
        cout<<"choose form menu"<<endl;
        cout<<"1.Gaddis/Savitch Chap X Prob A"<<endl;
        cout<<"2.Gaddis/Savitch Chap Y Prob B"<<endl;
        cout<<"3.Gaddis/Savitch Chap Z Prob C"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //input your choice
        cin>>choice;
        //Solve the problem chosen
        switch (choice){
            case 1:problem1(); break;
            case 2:problem2(); break;
            case 3:problem3(); break;
            default: exitMnu=true;
        }     
    }while(!exitMnu);
        
    //Exit Stage Right!!!
    return 0;
}

//Solution to problem here
void problem1(){
    cout<<"Put solution to choice 1 here"<<endl;
    cout<<"Everything between main and return"<<endl;
    }

void problem2(){
    cout<<"Put solution to choice 2 here"<<endl;
    cout<<"Everything between main and return"<<endl;
    }

void problem3(){
    cout<<"Put solution to choice 3 here"<<endl;
    cout<<"Everything between main and return"<<endl;    
    }