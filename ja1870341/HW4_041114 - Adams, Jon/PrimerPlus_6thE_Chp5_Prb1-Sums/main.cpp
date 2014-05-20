/* 
 * File:   main.cpp
 * Author: adams, Jonathan
 *
 * Created on April 11, 2014, 07:36 PM
 */

#include <iostream>

using namespace std;
//Global Constants
//Function prototypes
//Execution
int main(int argc, char** argv) {
    //Variables
    int int1, int2, sum, total=0;
    //inputs
    cout<<"Please input two separate integers, the smaller first"<<endl;
    cin>>int1>>int2;
    //Loop to add all integers
    do {
        total=int2+(int2--)+total;
        int2--;
        cout<<"#: "<<total<<"+"<<endl;
    } while (int2>=int1);
    //Output
    cout<<"The sum of these integers and all numbers between is: "<<endl;
    cout<<total<<endl;
    
    return 0;
}

