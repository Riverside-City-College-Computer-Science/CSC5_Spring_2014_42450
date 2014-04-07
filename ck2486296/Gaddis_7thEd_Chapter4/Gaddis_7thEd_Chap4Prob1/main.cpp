
/*
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 26, 2014, 11:31 AM
 * what num is greater
 */
//system libs
#include <iostream>
using namespace std;

//global constants

//system prototypes

//execution begins here!!
int main(int argc, char** argv) {

//declare variables
float num1, num2;
//ask for user input
    cout<<"plese enter in two numbers and tell you what is the bigger and smaller number "<<endl;
    cin>>num1>>num2;
    //else if logic
    if (num1>num2){
        cout<<num1<<" is greater then "<<num2<<endl;
    }
    else if (num1<num2){
        cout<<num2<<" is greater then "<<num1<<endl;
    }
    else if (num1==num2){
        cout<<num1<<" is equal to "<<num2<<endl;
    }
    //exit stage right
    return 0;
}

