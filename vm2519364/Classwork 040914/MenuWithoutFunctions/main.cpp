/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 9, 2014, 7:55 AM
 * Purpose: Menu without Functions
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <fstream>//File input/output
#include <ctime>//time for random and program
#include <iomanip>//Formatting
#include <cmath>//Math functions
using namespace std;

//Global Constants
//If not a Global constant get an F


//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
     //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1. Gaddis/Savitch Problem X Chapter A"<<endl;
        cout<<"2. Gaddis/Savitch Problem Y Chapter B"<<endl;
        cout<<"3. Gaddis/Savitch Problem Z Chapter C"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{
                cout<<"Put solution to choice 1 here"<<endl;
                cout<<"Everything between main and return"<<endl<<endl;
                break;
            }
             case 2:{
                cout<<"Put solution to choice 2 here"<<endl;
                cout<<"Everything between main and return"<<endl<<endl;
                break;
            }
              case 3:{
                cout<<"Put solution to choice 3 here"<<endl;
                cout<<"Everything between main and return"<<endl<<endl;
                break;
            }
            default: exitMnu=true;
        }
        
        
        
    }while(!exitMnu);
    
    
    //Exit Stage Right
    return 0;
}

