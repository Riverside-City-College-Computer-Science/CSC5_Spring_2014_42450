/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 9:51 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float buildCost, insureCost;
    
    //Ask user to input replacement cost
    cout<<"Please input the replacement cost for desired building"<<endl;
    
    //Input cost
    cin>>buildCost;
    
    //Calculate insurance cost
    insureCost=buildCost*.8;
            
    //Output insurance cost
    cout<<"Minimum reccomnded amount of insurance for property = $"<<setprecision(2)<<fixed<<insureCost<<endl;
    
    //Exit Stage Right
    return 0;
}

