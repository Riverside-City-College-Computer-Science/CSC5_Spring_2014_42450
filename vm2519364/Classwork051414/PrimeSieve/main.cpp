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
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void prime(int [],int);
void prntPrm(int [],int,int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    int array[SIZE];
    //Fill the array with 2 digit random numbers
    filAray(array,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Sort
    prime(array,SIZE);
    //Print the array
    prntPrm(array,SIZE,10);
    //Exit stage right
    return 0;
}
void prime(int a[],int n){
    //Examine each position in the list
    //up to its square root
    for(int pos=2;pos<sqrt(n);pos++){
      //Increment by the factor to test for prime numbers
      for(int i=2*pos;i<n;i+=pos){
        //Zero out those multiplicative factors
          a[i]=0;
      }//end for i
    }//end for pos
}

void prntPrm(int a[],int n,int perLine){
    int cnt=0;
    cout<<endl;
    for(int i=2;i<n;i++){
        if(a[i]!=0){
           cout<<setw(5)<<a[i]; 
           if(cnt++%perLine==(perLine-1))cout<<endl;
        } 
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Fill with random 2 digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
    }
}