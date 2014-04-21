/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 4, 2014, 10:59 AM
 * Program ask user to input the radius of a circle and prints the
 * diameter, circumference and area of the circle.
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables
    
        int radius; //Use 3.14159 for pi

 cout <<"Enter the circle radius"<<endl;
 cin>> radius;

 cout << "Diameter is " << radius * 2.0<<endl;
 cout << "Circumference is " << 2 * 3.14159 * radius<<endl;
 cout << "Area is " << 3.14159 * radius * radius << endl;
 
//Exit
    return 0;
}

