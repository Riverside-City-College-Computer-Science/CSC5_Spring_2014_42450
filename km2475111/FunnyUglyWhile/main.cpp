/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 30, 2014, 8:05 AM
 * Purpose: Funny/Ugly numbers in class
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
//int divOut(int,int);
//void divOut2(int&,int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    int endTest=1475,counter=0,
        seqNum=0,numTest;
    //loop to find last number in sequence
    do{
        numTest=++seqNum;
        //Remove all the 2's
        while(numTest%2==0)numTest/=2;
        while(numTest%3==0)numTest/=3;
        while(numTest%5==0)numTest/=5;
        if(numTest==1){
            counter++;
            cout<<seqNum<<endl;
        }
    }while(counter<endTest);
    //output number
    cout<<"The "<<endTest<<" element = "<<seqNum<<endl;
    //Exit Stage Right!!
    return 0;
}
/*int divOut(int x,int d){
    while(x%d==0)x/=d;
    return x;
}*/
/*void divOut2(int &x,int d){
    while(x%d==0)x/=d;
}*/