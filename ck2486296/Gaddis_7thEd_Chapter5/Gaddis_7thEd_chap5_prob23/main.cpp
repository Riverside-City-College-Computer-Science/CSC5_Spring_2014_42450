/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 10:29 PM
 * 
 */
//system Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!

int main(int argc, char** argv) {
//loop pattern A
    cout<<"pattern A"<<endl;
    cout<<endl;
    for(int a=1;a<=10;a++){
        for(int a1=1;a1<=a;a1++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"pattern B"<<endl;
    cout<<endl;
    for(int b=1;b<=10;b++){
        for(int b1=10;b1>=b;b1--){
            cout<<"*";
        }
        cout<<endl;
    }
            
    return 0;
}

