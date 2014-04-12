/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 7, 2014, 9:37 AM
 * Fibonacci Sequence
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants 

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int fi,fim1,fim2;
    int term,cndStop;
    //Initialize variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //Input the term to stop the 
    //sequence
    cout<<"How many terms in the fibonacci ";
    cout<<"sequence would you like to calculate?"<<endl;
    cin>>cndStop;
    //Print out the initial terms
    cout<<"Fibonacci Sequence = {"<<fim2<<",";
    cout<<fim1<<","<<fi<<",";
    //Loop thru the sequence
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //Output the next term
        if(term<cndStop-1)cout<<fi<<",";
        else cout<<fi;
    }while(++term<cndStop);
    cout<<"}"<<endl;
    //Exit the program
    return 0;
}

