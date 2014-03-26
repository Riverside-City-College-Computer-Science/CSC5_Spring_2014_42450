/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 5:12 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short tickA, tickB, tickC;
    float tickTot;
    
    //Ask user how many tickets were sold per class
    cout<<"Please input how many tickets were sold for A, B, and C class"<<endl;
    
    //Input tickets sold per class
    cin>>tickA>>tickB>>tickC;
    
    //Calculate ticket sales income
    tickTot=tickA*15+tickB*12+tickC*9;
    
    //Output ticket sales income
    cout<<"Income generated from ticket sales = $"<<setprecision(2)<<fixed<<tickTot<<endl;
    
    //Exit Stage Right
    return 0;
}

