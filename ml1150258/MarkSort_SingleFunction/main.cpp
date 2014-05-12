/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 12, 2014, 7:59 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);


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
    markSrt(array,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Exit stage right
    return 0;
}
void markSrt(int a[],int n){
    //Examine each position in the list
    for(int pos=0;pos<n-1;pos++){
      //Place the smallest element at the top
      //of the list
      for(int i=pos+1;i<n;i++){
        //Swap positions if smaller
        if(a[pos]>a[i]){
          int temp=a[pos];
          a[pos]=a[i];
          a[i]=temp;
        }//end if
      }//end for i
    }//end for pos
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