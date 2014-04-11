/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 9, 2014, 7:55 AM
 * Menu Without Functions
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//srand
#include <iostream>//standard input ouput
#include <fstream>//file input/output
#include <ctime>//time for random and program
#include <iomanip>//formatting
#include <cmath>//math functions
using namespace std;

//Global Constants
//If not a global constant, get an F

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Menu variables
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis/Savitch Chap A Prob X"<<endl;
        cout<<"2. Gaddis/Savitch Chap B Prob Y"<<endl;
        cout<<"3. Gaddis/Savitch Chap C Prob Z"<<endl;
        cout<<"Anything else Exit"<<endl;
        //input choice
        cin>>choice;
        //solve chosen problem
        switch(choice){
            case 1:{
                cout<<"solution to choice 1 here"<<endl;
                cout<<"between main and return"<<endl<<endl;
                break;
            }
            case 2:{
                cout<<"solution to choice 2 here"<<endl;
                cout<<"between main and return"<<endl<<endl;
                break;
            }
            case 3:{
                cout<<"solution to choice 3 here"<<endl;
                cout<<"between main and return"<<endl<<endl;
                break;
            }
            default: exitMnu=true;
        }
        
    }while(!exitMnu);
//Exit program
    return 0;
}

