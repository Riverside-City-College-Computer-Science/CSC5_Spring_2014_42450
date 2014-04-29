/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on April 28, 2014, 8:11 AM
 */
//system Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes
float savngs1(float,float,int);
float savngs2(float,float,int);

  



//Execution Begins
int main(int argc, char** argv) {
// Declaration of variables
    float pv=100.0f,intRate=0.04f,fv;
    int nCmpPer=18;
    //Output the inputs
    cout << "Our Savings Functions"<< endl;
    cout << "Present Values"<< pv << endl;
    cout << "Interest Rate = " << intRate*100<< "%" << endl;
    cout << "Number of compounding periods = "
            << nCmpPer << " (years)" << endl;
    //calculate and output the future value
    cout <<setprecision(2)<< showpoint << fixed;
    cout << "Future Value = $"
            << savngs1(pv, intRate, nCmpPer)<< endl;
       cout << "Future Value = $"
            << savngs2(pv, intRate, nCmpPer)<< endl;
    //Exit Stage right 

    return 0;
}
float savngs2(float balance, float intrst, int n){
    //Loop and Calculate the added interest every year
    for (int year=1; year <= n; year++){
        balance *=(1+intrst);
    }
    return balance;
}
float savngs1(float balance, float intrst, int n){
    return balance*pow((1+intrst), n);
}