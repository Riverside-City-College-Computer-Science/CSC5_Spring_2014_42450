/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 10, 2014, 10:23 PM
 * Purpose: CSC5 Final - Extra Credit
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num1,num2;
    string num1Str,num2Str="";
    cout<<"Enter two numbers to compare: ";
    cin>>num1>>num2;
    num1Str=static_cast<ostringstream*>(&(ostringstream()<<num1))->str();
    num2Str=static_cast<ostringstream*>(&(ostringstream()<<num2))->str();
    if(num1.at(0)=="9"){
        if(num2.at(0)!="9"){
            cout<<"Number "<<num2<<" is bigger than "<<num1<<endl;
        }
    }else if(num1.at(1)=="8"){
        if(num2.at(1)!="8"){
            cout<<"Number "<<num2<<" is bigger than "<<num1<<endl;
        }else{
            cout<<"Number "<<num1<<" is bigger than "<<num2<<endl;
        }
    }else if(num1.at(1)=="7"){
        if(num2.at(1)!="7"){
            cout<<"Number "<<num2<<" is bigger than "<<num1<<endl;
        }else{
            cout<<"Number "<<num1<<" is bigger than "<<num2<<endl;
        }
    }
    return 0;
}

