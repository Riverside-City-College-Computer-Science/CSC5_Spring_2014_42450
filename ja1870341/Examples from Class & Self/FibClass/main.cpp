/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 * Created on April 7, 2014, 9:37 AM
 *Fibonacci Sequence Savitch Chp 3 Prb 5
 */
//System Libraries
#include <iostream>

using namespace std;
//Global Constants
//Function prototypes
//Execution
int main(int argc, char** argv) {
        //Declare variables
    float fi, fim1, fim2;
    float term, cndStop;
    //Initialize variables
    fim1=1;
    fim2=1;
    fi=fim1+fim2;
    term=3;
    //Input the term to stop sequence
    cout<<"How many terms of fibonacci sequence do you want?!"<<endl;
    cin>>cndStop;
    //Print initial terms
    cout<<"Fibonacci Sequence = ("<<fim2<<", "<<fim1<<", "<<fi<<", "<<endl;
    //loop
    do {
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        if (term<cndStop-1)cout<<fi<<", ";
        else cout<<fi;
    } while (++term<cndStop);
    cout<<")"<<endl;
    //Exit the program
    
       
    
            
    
    
    return 0;
}

