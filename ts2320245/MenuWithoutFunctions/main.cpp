/* 
 * File:   main.cpp
 * Author: Saldana,Thomas
 * MenuWithoutFunctions
 *
 * Created on April 9, 2014, 7:56 AM
 */
//System Libraries
#include <cstdlib> //Random Function srand
#include <iostream>// Standard input/ouput
#include<fstream>// file input output
#include <ctime> //time for random and program
#include <iomanip>//formating
#include <cmath>//math functions
using namespace std;
//Global Constants

//Function Prototypes 

//Execution begins
int main(int argc, char** argv) {
    //Declare menu variables
    
    int choice;
    bool exitMnu=false;
    //loop until exit
    do{
        //output menu
        cout <<"Choose from the menu.\n"
             << "1. Gaddis/Savitch Prob X Chap A\n"
                    << "2. Gaddis/Savitch Prob X Chap A\n"
                    << "3. Gaddis/Savitch Prob X Chap A\n"
                    << "4. Gaddis/Savitch Prob X Chap A\n"
                    << "5. Gaddis/Savitch Prob X Chap A\n"
                    << "Anything else Exit\n"<< endl;
        //input your choice
        cin >> choice;
        //solve the problem choosen
        switch (choice){
            case 1:{
                cout <<"putsolution to choice 1 here";
                cout << "Everything between main and return" << endl;
                break;
            }
            
            case 2:{
                cout <<"putsolution to choice 2 here";
                cout << "Everything between main and return" << endl;
                break;
            }
            case 3:{
                cout <<"putsolution to choice 2 here";
                cout << "Everything between main and return" << endl;
                break;
            }
            
            case 4:{
                cout <<"putsolution to choice3 here";
                cout << "Everything between main and return" << endl;
                break;
            }
            default : exitMnu = true;
            
            
        }
        
    }while (!exitMnu );
    

    return 0;
}

