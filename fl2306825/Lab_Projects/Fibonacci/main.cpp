/* 
 * File:   main.cpp
 * Author: Frank Luna
 * Fibonacci Sequence
 * Created on April 7, 2014, 9:36 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    int fi, fim1, fim2;
    int term, cndStop;
    
    //Initialize variables
    fim1 = 1;
    fim2 = 1;
    fi = fim1 + fim2;
    term = 3;
    
    //Input the term to stop the sequence
    cout << "How many terms in the fibonacci sequence would you like to "
            "calculate?" << endl;
    cin >> cndStop;
    
    //Print out the initial terms
    cout << "Fibonacci sequence = {" << fim2 << "," << fim1 << "," << fi << "," ;
    
    //Loop through the sequence
    
    do{
        fim2 = fim1;
        fim1 = fi;
        fi = fim1 + fim2;
        
        //Output the next term
        if(term < cndStop - 1)cout << fi << ",";
        else cout << fi;
        
    }while(++term < cndStop);
    cout << "}" << endl;
    
    //Execution ends here
    return 0;
}

