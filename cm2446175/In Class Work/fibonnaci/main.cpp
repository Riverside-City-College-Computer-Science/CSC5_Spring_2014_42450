/* 
 * File:   main.cpp
 * Author: christopher merrill
 * Created on April 7, 2014, 9:37 AM
 * fibonaci sequance
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
    int fi, fim1, fim2;
    int term,cndStop;
    //initialize variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //input the term to stop the sequence
    cout<<"How many terms in the fibonaci sequance ";
    cout<<" would you like to calculate"<<endl;
    cin>>cndStop;
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

