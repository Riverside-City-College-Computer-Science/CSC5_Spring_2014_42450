/* 
 * File:   main.cpp
 * Author: christopher merrill
 * Created on April 7, 2014, 9:37 AM
 * taxes
 */
//system libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float income, tax;
    int term,cndStop;
    //input the term to stop the sequence
    cout<<"Calculate your state taxes ";
    cout<<"from the $'s income which you input."<<endl;
    //loop thru the sequence
    while(cin>>oncme){
        if(income<15000){
            tax=0
        }else if(income<=25000){
            tax=(income
        }            
    }
    //print out the initial terms
    cout<<"Fibonacci Sequence = "<<fim2<<",";
    cout<<fim1<<","<<fi<<",";
    //loop thru the sequence
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //output thenext term
        if(term<cndStop-1)cout<<fi<<",";
        else cout<<fi;
    }while(++term<cndStop);
    //exit stage right

    return 0;
}
