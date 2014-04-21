/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 9, 2014, 7:58 AM
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;

//Global constants

//Function Prototypes
void problem1();
void problem2();
void problem3();

//Execution Begins Here!
int main(int argc, char** argv) {
    int choice;
    bool exitMnu=false;
    
    do{
        //output menu
        cout<<"1. Gaddis/Savitch Chap Y Prob A"<<endl;
        cout<<"2. Gaddis/Savitch Chap Y Prob B"<<endl;
        cout<<"3. Gaddis/Savitch Chap Y Prob C"<<endl;
        cout<<"Press any other key to Exit"<<endl;
        //input choice
        cin>>choice;
        //solve problem code
        switch(choice){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            default: exitMnu=true;
        }
    }while(!exitMnu);

    return 0;
}
//solution to problem 1 here
void problem1(){
    cout<<"Solution to choice 1 here!"<<endl
        <<"Everything between main and return."<<endl;
}
//solution to problem 2 here
void problem2(){
    cout<<"Solution to choice 2 here!"<<endl
        <<"Everything between main and return."<<endl;
}
//solution to problem 3 here
void problem3(){
    cout<<"Solution to choice 3 here!"<<endl
        <<"Everything between main and return."<<endl;
}