/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 * Created on March 26, 2014, 2:31 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constant
//Function Prototypes
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int cels, fahr;   
    cels=100;
    fahr=(9.0/5.0)*cels+32; 
//Loop to determine value    
    while (cels!=fahr)
    {  
        fahr=(9.0/5.0)*cels+32;
        cels=cels-1;
    }
    //Output
    cout<<"Celsius and Fahrenheit are the same at ";
    cout<<fahr<<"!";  
    //Exit Stage Right
    return 0;
}