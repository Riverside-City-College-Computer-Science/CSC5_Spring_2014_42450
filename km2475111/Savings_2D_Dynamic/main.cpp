/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 2, 2014, 9:44 AM
 * Purpose: 2D dynamic array
 */

//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

//Global COnstants

//Function Prototypes
int **filAray(int,int);
void prntAry(int**,int,int);
void destroy(int**,int);
float save(float,float,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    int rows=50,cols=8;
    //fill the array
    int **array=filAray(rows,cols);
    //print the array
    prntAry(array,rows,cols);
    //destroy and exit
    destroy(array,rows);
    return 0;
}
float save(float p,float i,int n){
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
    }
    return savings;
}
int **filAray(int r,int c){
    //Declare 2D array
    int **a=new int*[r];
    for(int row=0;row<r;row++){
        a[row]=new int[c];//for every row, makes a new column
    }
    //initialize 2D array
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            a[row][col]=save(100.00f,col/100.00f,row);
        }
    }
    return a;
}
void prntAry(int **a,int r,int c){
    //print all the data in the array
    //initialize 2D array
    cout<<endl;
    cout<<"Year";
    for(int col=0;col<c;col++){
        cout<<"    "<<col<<"%";
    }
    cout<<endl;
    for(int row=0;row<r;row++){
        cout<<setw(3)<<row<<" ";
        for(int col=0;col<c;col++){
            //cout<<a[row][col]<<" ";
            cout<<setw(5)<<*(*(a+row)+col)<<" ";//also works
        }
        cout<<endl;
    }
    cout<<endl;
}
void destroy(int **a,int r){
    //destroy the columns
    for(int row=0;row<r;row++){
        delete []a[row];
    }
    delete []a;
}