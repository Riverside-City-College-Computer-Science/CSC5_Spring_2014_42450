/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 13, 2014, 9:13 PM
 */

#include <iostream>
#include <cmath>
//System libraries
using namespace std;

//NOTE: Purposely avoiding loops and if statements. 

//Global Constants
//Function Prototypes
//Execution starts here
int main(int argc, char** argv) {
    
    unsigned int weight, height, age;
    float male, female;
    
    /* Why could I not make "male and female" global constants?
     I couldn't even declare them up here as constants and have 
     the equation work*/
    
    cout<<"Please input the person's weight in pounds, height "<<endl;
    cout<<"in inches and age in years"<<endl;
    cout<<"NOTE: Round all numbers to the nearest whole number"<<endl;
    cin>>weight>>height>>age;
    cout<<"If subject is female, it will take ";
    //Female calculations and output
    female=655+(4.3*weight)+(4.7*height)-(4.7*age);
    cout<<female;
    cout<<" calories a day to maintain their body weight."<<endl;
    cout<<"That's "<<female/230<<" candy bars."<<endl;
    //Male calculations and output
    cout<<"If subject is male, it will take ";
    male=66+(6.3*weight)+(12.9*height)-(6.8*age);
    cout<<male;
    cout<<" calories a day to maintain their body weight."<<endl;
    cout<<"That's "<<male/230<<" candy bars.";
    //Exit Stage Right
    return 0;
}

