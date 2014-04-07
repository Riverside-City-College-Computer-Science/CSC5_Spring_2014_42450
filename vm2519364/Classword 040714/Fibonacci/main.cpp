/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 7, 2014, 9:37 AM
 * Purpose: Fibonacci Sequence
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
   int fi, fim1, fim2;
   int term, cndStop;
   //Initialize Variables
   fim1=1;
   fim2=1;
   fi=fim1+fim2;
   term=3;
   //Input the term to stop the sequence
   cout<<"How many terms in the fibonacci sequence";
   cout<<" would you like to calculate?\n";
   cin>>cndStop;
   //Print out the initial terms
   cout<<"Fibonacci Sequence = {";
   cout<<fim2;
   cout<<", ";
   cout<<fim1;
   cout<<", ";
   cout<<fi;
   cout<<", ";
           
   //Loop thru the sequence
   do{
       fim2=fim1;
       fim1=fi;
       fi=fim1+fim2;
       //Output the next term
             
             if (term<cndStop-1)cout<<fi<<", ";
             else cout<<fi;
                 
   }while(++term<cndStop);
   cout<<"}\n";
    //Exit Stage Right
    return 0;
}

