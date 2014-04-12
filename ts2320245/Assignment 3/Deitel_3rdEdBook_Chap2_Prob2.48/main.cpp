/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem2.48: One interesting application of computers is drawing graphs and bar charts (sometimes called "histograms"). 
 *              Write a program that reads five numbers ( each between 1 and 30). For each number read, your program should
 *              print a line containing that number of adjacent asterisks. For example, if your program reads the number seven, 
 *              it should print *******.
 *
 * Created on March 25, 2014, 3:30 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {
    int n;
    cout << "Enter five positive numbers ( which are between 1 and 30): \n";
  
 
    for ( int x=1; x <=5; ++x){
        cin >> n;
        for (int y=1; y <=n; ++y)
            cout << "*" ;
        cout << endl;
    } cout << endl;
    return 0;
}

