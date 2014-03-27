/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 * Created on March 26, 2014, 1:13 PM
 * software sales
 */
//system libs
#include <iostream>
#include <iomanip>

//global constants 
const float DIS1=.20;
const float DIS2=.30;
const float DIS3=.40;
const float DIS4=.50;
//system prototypes

//execution begins here!!
using namespace std;
int main(int argc, char** argv) {
    //declare variables  
    int quant;
    //ask for input 
    cout<<"enter the the amount of units that will be sold "<<endl;
    cin>>quant;
    //Discount calculations 
    float dis20=-(99*DIS1)+99;
    float dis30=-(99*DIS2)+99;
    float dis40=-(99*DIS3)+99;
    float dis50=99*DIS4;
    //Input validation
    while (quant<=0){
        cout<<"please enter in a value greater than 0"<<endl;
        cin>>quant;    
    }
    //if else logics
    cout<<fixed<<setprecision(2)<<showpoint;
     if(quant>=10&&quant<=19){
        float total=quant*dis20;
        cout<<"the total is $"<<total;
    }   
    else if(quant>=20&&quant<=49){
        float total=quant*dis30;
        cout<<"the total is $"<<total;
    }   
    else if(quant>=50&&quant<=99){
        float total=quant*dis40;
        cout<<"the total is $"<<total;
    }   
    else if(quant>=100){
        float total=quant*dis50;
        cout<<"the total is $"<<total;
    }  
    else{
        float total=quant*99;
        cout<<"the total is $"<<total;
    }
    return 0;
}

