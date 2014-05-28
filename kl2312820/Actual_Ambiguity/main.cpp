/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on May 21, 2014, 9:35 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void swap(int &,int &);
void swap(int *,int *);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Define 4 Variables
    int a=rand()%10;
    int b=rand()%10;
    int c=rand()%10;
    int d=rand()%10;
    
    //Print Variables
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
    cout<<"D="<<d<<endl;
    
    //Swap The Values
    swap(a,b); //Pass By Reference
    swap(&c,&d); //Pass By Address Via Pointers
    
    //Print After Swap
    cout<<" "<<endl;
    cout<<"After swap="<<endl;
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
    cout<<"D="<<d<<endl;
    
    //Exit Stage Right!
    return 0;
}

void swap(int &x,int &y){
    cout<<"Swapping using reference variables."<<endl;
    int temp=x;
    x=y;
    y=temp;
}

void swap(int *x,int *y){
    cout<<"Swapping using pointer variables."<<endl;
    int temp=*x;
    *x=*y;
    *y=temp;
}

