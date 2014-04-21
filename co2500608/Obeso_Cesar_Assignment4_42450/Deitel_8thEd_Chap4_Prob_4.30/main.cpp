/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Program that reads the radius of a circle and computes and prints the
 * diameter, the circumference and the area
 * Created on April 8, 2014, 10:53 AM
 */

//System libraries
#include <iostream>
#include <iomanip>

using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
  float radius;
  float pi = 3.14159;
  float diameter;
  float circum;
  float area;
 
  cout << "Enter radius of circle: ";
  cin >> radius;
 
  diameter = radius * 2;
  circum = radius * 2 * pi;
  area = radius * radius * pi;
 
  cout << setprecision( 2 )<< fixed << "The diameter of circle is " << diameter << endl
      << "The circumference of circle is " << circum << endl
      << "The area of circle is " << area << endl;  
 
  //Exit stage right
    return 0;
}

