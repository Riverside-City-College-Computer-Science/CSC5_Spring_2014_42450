/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 19, 2014, 9:09 AM
 * Purpose: make a function for area of a triangle
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void getInpt(float &,float &,float &);
void areaPer(float,float,float,float &,float &);
void print(float,float,float,float,float);
//Execution Begins Here!
int main(int argc, char** argv) {
    float num1,num2,num3,area,perimtr;
    //get input
    getInpt(num1,num2,num3);
    //calculate
    areaPer(num1,num2,num3,area,perimtr);
    //print
    print(num1,num2,num3,area,perimtr);
    return 0;
}
void getInpt(float &num1,float &num2,float &num3){
    cout<<"Enter a length (greater than zero) "
        <<"for each side of your triangle: ";
    cin>>num1>>num2>>num3;
    while(num1<1){
        cout<<"Enter a number greater than 0: ";
        cin>>num1;
    }
    while(num2<1){
        cout<<"Enter a number greater than 0: ";
        cin>>num2;
    }
    while(num3<num1&&num3<num2){
        cout<<"Enter a number greater than "
            <<num1<<" and "<<num2<<": ";
        cin>>num3;
    }
}
void areaPer(float n1,float n2,float n3,float &area,float &perimeter){
    float semiPer=(n1+n2+n3)/2;
    area=sqrt((semiPer*(semiPer-n1)*(semiPer-n2)*(semiPer-n3)));
    perimeter=n1+n2+n3;
}
void print(float n1,float n2,float n3,float area,float perimtr){
    cout<<"The area of "<<n1<<", "<<n2
        <<", and "<<n3<<" = "<<area<<endl
        <<"The Perimeter of "<<n1<<", "
        <<n2<<", and "<<n3<<" = "<<perimtr<<endl;
}