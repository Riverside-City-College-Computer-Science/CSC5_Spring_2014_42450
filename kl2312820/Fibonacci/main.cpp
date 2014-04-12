/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 7, 2014, 1:17 PM
 * Purpose: To Run the Fibonacci Sequence
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //I/O
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int fi,fim1,fim2;
    int term,cndStop;
    
    //Initialize Variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    
    //Input The Term To Stop The 
    //Sequence
    
    cout<<"How many terms in the Fibonacci ";
    cout<<"Sequence would you like to calculate?"<<endl;
    cin>>cndStop;
    
    //Print Out The Initial Terms
    cout<<"Fibonacci Sequence = {"<<fim2<<",";
    cout<<fim1<<","<<fi<<",";
    
    //Loop Through The Sequence
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        
        //Output The Next Term
        if(term<cndStop-1)cout<<fi<<",";
        else cout<<fi;
    }while(++term<cndStop);
    cout<<"}"<<endl;
    
    //Exit Stage Right!
    return 0;
}

