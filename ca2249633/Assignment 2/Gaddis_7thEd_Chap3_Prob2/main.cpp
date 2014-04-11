/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 14, 2014, 7:14 PM
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
    float classA, classB, classC, total;
    
    //Prompt user for how many tickets of each
    //class they want.
    cout<<"How many Class A were sold?"<<endl;
    cin>>classA;
    cout<<"How many Class B were sold?"<<endl;
    cin>>classB;
    cout<<"How many Class C were sold?"<<endl;
    cin>>classC;
    
    //calculate the cost of the tickets
    total=classA*15+classB*12+classC*9;
    
    //Display the total price        
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total: $"<<total;

    return 0;
}

