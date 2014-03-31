/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 24, 2014, 1:03 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants
float specG = 62.4;
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare variables
    float buoyF, radius, weight;
    cout<<"Please input the radius of your sphere in inches ";
    cin>>radius;
    cout<<"Please input the weight of your sphere in pounds ";
    cin>>weight;
    buoyF = (((4/3)*(3.14)*pow(radius, 3))/12)*specG;
    cout<<"Your sphere's buoyant force is "<<buoyF<<" pounds."<<endl;
    if (buoyF>=weight)
        cout<<"Your sphere will float"<<endl;
    else 
        cout<<"Your sphere will sink"<<endl;
    //Exit Stage Right
    return 0;
}

