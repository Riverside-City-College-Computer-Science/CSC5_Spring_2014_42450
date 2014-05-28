/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 12, 2014, 7:58 AM
 * Purpose: Mark sort
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
float average(int [],int);
float var(int [],int);
void freqAry(int [],int,int [],int);
float wtAvg(int [],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=6000;
    const int FSIZE=7;
    int array[SIZE],freq[FSIZE]={};
    //fill array
    filAray(array,SIZE);
    //print array
    prntAry(array,SIZE,10);
    //ouput average and variance
    cout<<"Mean    = "<<average(array,SIZE)<<endl
        <<"Std Dev = "<<sqrt(var(array,SIZE))<<endl;
    freqAry(array,SIZE,freq,FSIZE);
    //prntAry(freq,FSIZE,1);
    cout<<"Wt Avg  = "<<wtAvg(freq,FSIZE)<<endl;
    return 0;
}
void filAray(int a[],int n){
    //fill with random dice digits
    for(int i=0;i<n;i++){
        a[i]=rand()%6+1;//# between 1-6
    }
}
void prntAry(int a[],int n,int perline){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perline==perline-1){
            cout<<endl;
        }
    }
    cout<<endl;
}
float average(int a[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}
float var(int a[],int n){
    float variance=0;
    float mean=average(a,n);
    for(int i=0;i<n;i++){
        float x=(a[i]-mean);
        variance+=(x*x);
    }
    return variance/(n-1);
}
void freqAry(int a[],int n,int f[],int fs){
    for(int i=0;i<n;i++){
        f[a[i]]++;//increments position in array = to number on dice roll
    }
}
float wtAvg(int wt[],int s){
    float sum=0,sumWt;
    for(int x=0;x<s;x++){
        sum+=(x*wt[x]);
        sumWt+=wt[x];
    }
    return sum/sumWt;
}