/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 7, 2014, 9:37 AM
 * Fibonacci Sequence
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int fi,fim1,fim2;
    int term,cndStop;
    //Initialize Variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //Input the term to stop
    //the sequence 
    cout<<"How many terms in the Fibonacci sequence ";
    cout<<"would you like to calculate?"<<endl;
    cin>>cndStop;
    //Print out the initial terms
    cout<<"Fibonacci Sequence = {"<<fim2<<",";
    cout<<fim1<<","<<fi<<",";
    //Loop through the sequence
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //output the next term
        if(term<cndStop-1)cout<<fi<<",";
        else cout<<fi;
    }while(++term<cndStop);
    cout<<"}"<<endl;
    //Exit stage right

    return 0;
}

