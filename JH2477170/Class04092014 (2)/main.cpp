/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 9, 2014, 7:55 AM
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

//Execution Start Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output Menu
        cout<<"choose form menu"<<endl;
        cout<<"1.Gaddis/Savitch Prob X Chap A"<<endl;
        cout<<"2.Gaddis/Savitch Prob X Chap B"<<endl;
        cout<<"3.Gaddis/Savitch Prob X Chap C"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //input your choice
        cin>>choice;
        //Solve the problem chosen
        switch (choice){
            case 1:{
                cout<<"Put solution to choice 1 here"<<endl;
                cout<<"Everything between main and return"<<endl;
                break;
            }
            case 2:{
                cout<<"Put solution to choice 2 here"<<endl;
                cout<<"Everything between main and return"<<endl;
                break;
            }
            case 3:{
                cout<<"Put solution to choice 3 here"<<endl;
                cout<<"Everything between main and return"<<endl;
                break;
            }
            default: exitMnu=true;
        }     
    }while(!exitMnu);
        
    return 0;
}
