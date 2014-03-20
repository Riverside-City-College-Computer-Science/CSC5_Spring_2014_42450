/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 1:40 PM
 * calculate the velocity of sound through air given starting and ending tempatures.
 */
//system Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables and float
    float vel;
    int n,n2;
    //Prompt user for inputs
    cout<<"Input starting temperature ";
    cin>>n;
    cout<<"Input ending temperature ";
    cin>>n2;
    cout<<endl;
    //Set decimal place
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    //While statement to list solutions from starting temp. to end temp.
    while (n<=n2)
    {
        vel=331.3+0.61*n;//Equation to calculate velocity
        cout<<"At "<<n<<" degrees Celsius the velocity of sound is "<<vel<< " m/s."<<endl;
        n++;
        
    }   
    //Exit Stage Right
    return 0;
}

