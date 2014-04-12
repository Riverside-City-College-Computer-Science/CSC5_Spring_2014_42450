/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 4:10 PM
 * Sum of num
 */
//system Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!

int main(int argc, char** argv) {
//Declare Variables
    int usrint,total=0;
    //ask for input
    cout<<"Enter in a positive integer value and i will sum all the integers from 1 to that number"<<endl;
    cin>>usrint;
    //input validation
    while(usrint<=0){
        cout<<"please enter in a positive integer"<<endl;
        cin>>usrint;
    }
    //loop till count = usrint
    for(int count=1;count<=usrint;count++){
        total+=count;
    }
      cout<<"the total = "<<total<<endl;   
      //exit stage right
    return 0;
}

