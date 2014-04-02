/* 
 * File:   main.cpp
 * Author: Christopher
 *math tutor
 * Created on March 17, 2014, 5:29 PM
 */
//system libs
#include <iostream>
#include <random>

//global constants 

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
    srand (time(NULL));
    //declare variables  
    short num1 = rand() % 999+1;
    short num2 = rand() % 999+1;
    int dummy(1);
    //output
    cout<<"Press Enter/return to see the answer"<<endl;
    cout<<num1<<" + "<<num2<<" = ";
    while ( cin.peek() == EOF );
    cout<<num1+num2<<endl;
    return 0;
}

