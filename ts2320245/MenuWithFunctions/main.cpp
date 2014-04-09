/* 
 * File:   main.cpp
 * Author: Saldana,Thomas
 * MenuWith Functions
 *
 * Created on April 9, 2014, 7:56 AM
 */
//System Libraries
#include <cstdlib> //Random Function srand9\



#include <iostream>// Standard input/ouput
#include<fstream>// file input output
#include <ctime> //time for random and program
#include <iomanip>//formating
#include <cmath>//math functions
using namespace std;
//Global Constants

//Function Prototypes 
void problem1 ();
void problem2();
void problem3 ();

//Execution begins
int main(int argc, char** argv) {
    //Declare menu variables
    
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output menu
        cout <<"Choose from the menu.\n"
             << "1. Gaddis/Savitch Chap A Prob X\n"
             << "2. Gaddis/Savitch  Chap B Prob Y\n"
             << "3. Gaddis/Savitch  Chap C Prob Z\n"
             << "Anything else Exit\n"<< endl;
        //input your choice
        cin >> choice;
        //solve the problem choosen
        switch (choice){
            case 1: problem1 (); break;
            case 2: problem2 (); break;
            case 3: problem3 (); break;
            default : exitMnu = true;
            
        }
        
        
    }while ( ! exitMnu );
    

    return 0;
}
// Solution to problem 1 here
void problem1 (){
               cout <<"putsolution to choice1 here";
               cout << "Everything between main and return" << endl;
}
// Solution to problem 2 here
void problem2(){
                cout <<"putsolution to choice2 here";
                cout << "Everything between main and return" << endl;   
}
// Solution to problem 3 here
void problem3 (){
                cout <<"putsolution to choice3 here";
                cout << "Everything between main and return" << endl;
    
    
}