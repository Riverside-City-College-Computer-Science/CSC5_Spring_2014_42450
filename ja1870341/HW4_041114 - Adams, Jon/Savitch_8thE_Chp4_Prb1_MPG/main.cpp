/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11, 2014, 7:03 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
//Function Prototypes
//Execution Starts here
int main(int argc, char** argv) {
    float litgal=0.264179, lit, miles, mpg;
    cout<<"Input the number of liters that the car used!"<<endl;
    cin>>lit;
    cout<<"Input the distance travelled in whole miles"<<endl;
    cin>>miles;
    mpg=(miles/(lit*litgal));
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The car had "<<mpg<<" miles per gallon on this trip!";  
    return 0;
}

