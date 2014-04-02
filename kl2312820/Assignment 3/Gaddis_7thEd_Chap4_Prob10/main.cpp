/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 26, 2014, 1:38 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int quant;
    float discnt,totcst,dCost;
    //Input the number of units sold
    cout<<"Please input the number of units sold."<<endl;
    cout<<"Total Units Sold:"<<endl;
    cin>>quant;
    //Calculate the total of units sold
    totcst=quant*99;
    //Calculate the discount
    if (quant>=100)
    {
       discnt=0.50*totcst;
       cout<<setprecision(2)<<fixed<<showpoint;
       cout<<"Your total is $"<<totcst<<"."<<endl;
       cout<<"The total with the discount is $"<<discnt<<endl;
    }
    else if (quant>=50)
    {
        discnt=0.40*totcst;
        dCost=totcst-discnt;
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"Your total is $"<<totcst<<"."<<endl;
        cout<<"The total with the discount is $"<<dCost<<"."<<endl;
    }
    else if (quant>=20)
    {
        discnt=0.30*totcst;
        dCost=totcst-discnt;
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"Your total is $"<<totcst<<"."<<endl;
        cout<<"The total with the discount is $"<<dCost<<"."<<endl;
    }
    else if (quant>=10)
    {
        discnt=0.20*totcst;
        dCost=totcst-discnt;
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"Your total is $"<<totcst<<"."<<endl;
        cout<<"The total with the discount is $"<<dCost<<"."<<endl;
    }
    else if (quant>0)
    {
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"You must purchase at least ten units for a discount."<<endl;
        cout<<"Your total is $"<<totcst<<"."<<endl;
    }
    else 
    { 
        cout<<"That is not a valid number of units."<<endl;
    }
    //Exit Stage Right!
    return 0;
}

