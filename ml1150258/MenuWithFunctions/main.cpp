/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 9, 2014, 7:54 AM
 * Menu with Functions
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <fstream>//File input/output
#include <ctime>//Time for random and program
#include <iomanip>//Formatting
#include <cmath>//Math functions
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes
void problem1();
void problem2();
void problem3();

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis/Savitch Chap A Prob X"<<endl;
        cout<<"2. Gaddis/Savitch Chap B Prob Y"<<endl;
        cout<<"3. Gaddis/Savitch Chap C Prob Z "<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit the program
    return 0;
}

//Solution to Problem 1 here
void problem1(){
    cout<<"Put solution to choice 1 here"<<endl;
    cout<<"Everything between main and return"<<endl<<endl;
}

//Solution to Problem 2 here
void problem2(){
    cout<<"Put solution to choice 2 here"<<endl;
    cout<<"Everything between main and return"<<endl<<endl;    
}

//Solution to Problem 3 here
void problem3(){
    cout<<"Put solution to choice 3 here"<<endl;
    cout<<"Everything between main and return"<<endl<<endl;
}