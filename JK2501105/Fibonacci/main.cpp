/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on April 7, 2014, 9:37 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Declare Variables
    int fi,fim1,fim2;
    int term, cndStop;
    //Initialize Variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //Input the term to Stop
    //Sequence
    cout<<"How many terms in the fibonacci ";
    cout<<"Sequence would you like to calculate?"<<endl;
    cin>>cndStop;
    //Print out the initial terms
    cout<<"Fibonacci Sequence = { "<<fim2<<",";
    cout<<fim1<<","<<fi<<",";
    //Loop thru the sequence
    do{
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //Output the Next Term
        if (term<cndStop-1)
        cout<<fi<<",";
        else cout<<fi;
    }while(++term<cndStop);
    cout<<"}"<<endl;
    //Exit the Program
   

    return 0;
}

