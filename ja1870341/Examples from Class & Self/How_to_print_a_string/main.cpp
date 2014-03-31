/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 24, 2014, 8:30 AM
 */

#include <iostream>
#include <cstdlib>


using namespace std;
//Global Constants
//Function prototypes
//execution
int main(int argc, char** argv) {
    //Set rand # seed
    srand(static_cast<unsigned int>(time(0)));
    int mybeCsp=rand()%14+14;
    int cspDate=rand()%5+18;
    int diff=mybeCsp-cspDate;
    //output if on cusp
    if(diff<=2&&diff>=-2){
        //Inserting quotations into a cout
        cout<<"This date is on the \"CUSP\""<<endl;
        
    }
    //output the date
    cout<<"The end date of the horiscope = "<<cspDate<<endl;
    cout<<"The birthdate "<<mybeCsp<<endl;
    
    //Exit stage right
            
    return 0;
}

