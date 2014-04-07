/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 7, 2014, 9:36 AM
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi,fim1,fim2;
    int term,cndStop;
    //initialize
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //input term to stop sequence
    cout<<"How many terms in the Fibonacci "
        <<"sequence would you like to calculate?"
        <<endl;
    cin>>cndStop;
    while(cndStop<3){
        cout<<"Term must be greater than 3. Try again: ";
        cin>>cndStop;
    }
    //print initial terms
    cout<<"Fibonacci Sequence = {"<<fim2<<","<<fim1<<","<<fi<<",";
    //loop
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //output next term
        //check for last term in sequence
        if(term<cndStop-1)cout<<fi<<",";
        else cout<<fi;
    }while(++term<cndStop);
    cout<<"}"<<endl;
    //Exit Stage Right!
    return 0;
}

