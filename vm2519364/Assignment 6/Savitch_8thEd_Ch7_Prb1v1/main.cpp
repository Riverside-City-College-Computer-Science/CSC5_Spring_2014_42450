/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 17, 2014, 4:26 PM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void avgRain(float [], string [], int);
void actRain(float [], string [], int);
void diff(float [], float [], float [], int);
void graph(float [],float [],int, string []);
void prntAst(int);
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    const int YEAR=11;
    float average[YEAR],actual[YEAR], diffrence[YEAR];
    string month[12]={"January","February","March","April","May","June",
                         "July","August","September","October","November",
                          "December"};      
    //Function Call
    avgRain(average, month, YEAR);
    actRain(actual, month, YEAR);
    diff(average, actual, diffrence, YEAR);
    graph(average, actual, YEAR, month);
    //Exit Stage Right
    return 0;
}

void avgRain(float a[], string month[], int n){
    cout<<"Enter last year's average monthly rainfall for city.\n";
    for(int i=0;i<=n;i++){
        cout<<month[i]<<": ";
        cin>>a[i];
    }
    
}
void actRain(float b[], string month[], int n){
    cout<<"Now enter this years actual rainfall for your city.\n";
    for(int i=0;i<=n;i++){
        cout<<month[i]<<": ";
        cin>>b[i];
    }
}

void diff(float a[], float b[], float d[], int n){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);    
          cout<<right<<setw(20)<<"Jan.";
          cout<<right<<setw(10)<<"Feb.";
          cout<<right<<setw(9)<<"Mar.";
          cout<<right<<setw(9)<<"Apr.";
          cout<<right<<setw(8)<<"May";
          cout<<right<<setw(9)<<"June";
          cout<<right<<setw(9)<<"July";
          cout<<right<<setw(9)<<"Aug.";
          cout<<right<<setw(9)<<"Sept.";
          cout<<right<<setw(9)<<"Oct.";
          cout<<right<<setw(9)<<"Nov.";
          cout<<right<<setw(10)<<"Dec.\n";
    cout<<left<<"ACTUAL: "<<"   ";
    for(int i=0;i<=n;i++){
        cout<<right<<setw(9)<<b[i];
    }
    cout<<endl;
        cout<<left<<"DIFFRENCE: ";
        for(int i=0;i<=n;i++){
        d[i]=(b[i]-a[i]);
        cout<<right<<setw(9)<<d[i];
    }
        cout<<endl<<endl;
}
void graph(float a[],float b[],int n, string month[]){
    
    cout<<left<<"AVERAGE RAINFALL\n";
    for(int i=1;i<=n;i++){
        cout<<month[i]<<" ";
        cout<<"["<<a[i]<<"]"<<" ";
        prntAst(a[i]);
        cout<<endl;
    }
    cout<<endl;
    cout<<left<<"ACTUAL RAINFALL\n";
    for(int i=1;i<=n;i++){
        cout<<month[i]<<" ";
        cout<<"["<<b[i]<<"]"<<" ";
        prntAst(b[i]);
        cout<<endl;
    }
}
void prntAst(int n){
    for(int count=1;count<=n;count++){
        cout<<"*";
    }
}