/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on March 26, 2014, 11:31 AM
 * what area is greater
 */
//system libs
#include <iostream>
using namespace std;

//global constants

//system prototypes

//execution begins here!!
int main(int argc, char** argv) {

//declare variables
float l1, w1, area1, l2, w2, area2;
//ask for user input
    cout<<"enter in the length and width of rectangle one"<<endl;
    cout<<"length 1: ";cin>>l1;
    cout<<"width 1: ";cin>>w1;
    cout<<"enter in the length and width of rectangle two"<<endl;
    cout<<"length 2: ";cin>>l2;
    cout<<"width 2: ";cin>>w2;
    //calculations
    area1=l1*w1;
    area2=l2*w2;
    //else if logic
    cout<<"rectangle one ="<<area1<<endl;
    cout<<"rectangle two ="<<area2<<endl;
    if (area1>area2){
        cout<<"Rectangle 1 has the greater area then rectangle 2"<<endl;
    }
    else if (area1<area2){
        cout<<"Rectangle 2 has the greater area then rectangle 1"<<endl;
    }
    else if (area1==area2){
        cout<<"Rectangle 1's area is equal to rectangle 2's area"<<endl;
    }
    //exit stage right
    return 0;
}
