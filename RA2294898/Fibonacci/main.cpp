/* 
 * File:   main.cpp
 * Author: Roy Alba
 * Purpose: Fibonacci sequence
 * Created on April 7, 2014, 9:37 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi,fim1,fim2;
    int term,cndStop;
    //Initialize variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //Input the term to stop the
    //sequence
    cout<<"How many terms in the fibonnaci";
    cout<<" sequence would you like to calculate?"<<endl;
    cin>>cndStop;
    //Print out the initial terms
    cout<<"Fibonacci Sequence = {"<<fim2<<",";
    cout<<fim1<<","<<fi<<",";
    //Loop through the sequence
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //Output the next term
        if(term<cndStop-1) cout<<fi<<",";
            else cout<<fi;
        
        
        
    }while(++term<cndStop);
    cout<<"}"<<endl;
    //Exit the program        
    
    
    //Exit Stage Right!
    return 0;
}

