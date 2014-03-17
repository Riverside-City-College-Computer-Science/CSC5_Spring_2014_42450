/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 4, 2014, 4:15 PM
 */
//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

/*From C++ Primer Plus, Sixth Edition - Chapter 1 Problem 2:
 *Write a program that asks for a distance in furlongs
 * and converts it to yards. (I added additional conversions)
 */

//Execution
int main(int argc, char** argv) {
//Variables (float is needed for decimals??)
    float furlon, yard, miles, kilom;
//Prompt for input
    cout<<"Please input a distance in furlongs"<<endl;
    cout<<" "<<endl;
    cout<<"A note on furlongs from wikipedia:"<<endl;
    cout<<" "<<endl;
    cout<<"A furlong is a measure of distance in imperial units and"<<endl;
    cout<<"U.S. customary units equal to one-eighth of a mile, equivalent"<<endl;
    cout<<"to 220 yards, 660 feet, 40 rods, or 10 chains. Using the "<<endl;
    cout<<"internationally accepted conversion ratio that one inch equals"<<endl;
    cout<<"exactly 25.4 millimeters, one furlong is 201.168 meters."<<endl;
    cout<<"Enter your value:"<<endl;
//Input
    cin>>furlon;
//Output and conversions
    cout<<"This distance is equal to:"<<endl;
    yard= (furlon * 2.20e2);
    cout<<yard<<" yards."<<endl;
    miles= (furlon * 1.25e-1);
    cout<<miles<<" miles."<<endl;
    kilom= (furlon * 2.01168e2) / 1.0e3;
    cout<<kilom<<" kilometers."<<endl;
    cout<<"Press enter to exit"<<endl;
    cin.get();
    cin.get();
//Exit stage right
    return 0;
    
}

