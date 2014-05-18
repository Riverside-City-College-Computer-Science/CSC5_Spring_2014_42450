/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on May 14, 2014, 7:00 PM
 * Purpose: convert weight
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global constants

//Function Prototypes
void getInput1(float &,float &);
void getInput2(float &,float &);
void convert1(float, float, float &, float &);
void convert2(float, float, float &, float &);
void print1(float,float,float,float);
void print2(float,float,float,float);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    bool cntLoop=true;
    int choice1,choice2;
    float input1,input2,conv1,conv2;
    //loop until user quits
    do{
        //ask user how they will convert
        cout<<"To convert from pounds & ounces "
            <<"to kilograms & grams,"<<endl
            <<"Press 1."<<endl
            <<"To convert from kilograms & grams "
            <<"to pounds & ounces,"<<endl
            <<"Press 2."<<endl;
        cin>>choice1;
        switch(choice1){
            case 1:{
                //Gather user input
                getInput1(input1,input2);
                //convert
                convert1(input1,input2,conv1,conv2);
                //output
                print1(input1,input2,conv1,conv2);
                break;
            }
            case 2:{
                //Gather user input
                getInput2(input1,input2);
                //convert
                convert2(input1,input2,conv1,conv2);
                //output
                print2(input1,input2,conv1,conv2);
                break;
            }
            default:{
                cout<<"Incorrect selection."<<endl;
            }
        }
        //Prompt user to repeat or quit
        cout<<endl<<"To try again, press 1."<<endl
            <<"To Quit, press any other key."<<endl;
        cin>>choice2;
        switch(choice2){
            case 1:{
                //do not change cntLoop
                break;
            }
            default:{
                cout<<"Good-bye."<<endl;
                cntLoop=false;
            }
        }
    }while(cntLoop);
    //Exit Stage Right!!
    return 0;
}
void getInput1(float &num1,float &num2){
    cout<<"Enter a weight (in pounds): ";
    cin>>num1;
    cout<<"Enter a weight (in ounces): ";
    cin>>num2;
}
void getInput2(float &num1,float &num2){
    cout<<"Enter a weight (in kilograms): ";
    cin>>num1;
    cout<<"Enter a weight (in grams): ";
    cin>>num2;
}
void convert1(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float LBSTKG=2.2046;
    const float GTKG=1000.0;
    const float OZTLBS=16.0;
    //convert num1 and num2
    cnvrt1=num1/LBSTKG;
    cnvrt2=((num2/OZTLBS)/LBSTKG)*GTKG;
}
void convert2(float num1, float num2, float &cnvrt1, float &cnvrt2){
    const float LBSTKG=2.2046;
    const float GTKG=1000.0;
    const float OZTLBS=16.0;
    //convert num1 and num2
    cnvrt1=num1*LBSTKG;
    cnvrt2=((num2*OZTLBS)*LBSTKG)/GTKG;
}
void print1(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" lbs"<<" = "<<cnvr1<<" kg"<<endl
        <<num2<<" oz"<<" = "<<cnvr2<<" g"<<endl;
}
void print2(float num1,float num2,float cnvr1,float cnvr2){
    cout<<num1<<" kg"<<" = "<<cnvr1<<" lbs"<<endl
        <<num2<<" g"<<" = "<<cnvr2<<" oz"<<endl;
}