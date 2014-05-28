/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 12, 2014, 7:59 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
float average(int [],int);
float wtAvg(int [],int);
float var(int [],int);
void freqAry(int [],int,int[],int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=6000;
    const int FSIZE=7;
    int array[SIZE],freq[FSIZE]={};
    //Fill the array with 2 digit random numbers
    filAray(array,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Calculate the unweighted mean and variance
    //from raw data
    cout<<"Mean    = "<<average(array,SIZE)<<endl;
    cout<<"Std Dev = "<<sqrt(var(array,SIZE))<<endl;
    //Output the frequency array
    freqAry(array,SIZE,freq,FSIZE);
    //prntAry(freq,FSIZE,1);
    cout<<"Wt Avg  = "<<wtAvg(freq,FSIZE)<<endl;
    //Exit stage right
    return 0;
}

float wtAvg(int wt[],int s){
    float sum=0,sumWt;
    for(int x=0;x<s;x++){
        sum+=(x*wt[x]);
        sumWt+=wt[x];
    }
    return sum/sumWt;
}

void freqAry(int a[],int n,int f[],int fs){
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
}

float average(int a[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}

float var(int a[],int n){
    float var=0;
    float mean=average(a,n);
    for(int i=0;i<n;i++){
        float x=(a[i]-mean);
        var+=(x*x);
    }
    return var/(n-1);
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Fill with random dice digits
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%6+1;//[1,6]
    }
}