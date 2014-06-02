/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 2, 2014, 9:43 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants Here

//Function Prototypes
int **filAray(int,int);
void prntAry(int **, int,int);
void destroy(int **,int);
float save(float,float,int);


int main(int argc, char** argv) {
    //Declare variables
    int rows=50,cols=9;
    int **array=filAray(rows,cols);
    //Print the array
    prntAry(array,rows,cols);
    //Destroy and exit
    destroy(array,rows);
    return 0;
}

float save(float p,float i ,int n){
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
    }
    return savings;
}

void prntAry(int **a, int r,int c){
    //Print the heading
    cout<<endl;
    cout<<"Year";
    for(int col=0;col<c;col++){
        cout<<"    "<<col<<"%";
    }
    cout<<endl;
    //Print all the data in the array
    for(int row=0;row<r;row++){
        cout<<setw(4)<<row<<" ";
        for(int col=0;col<c;col++){
            cout<<setw(5)<<*(*(a+row)+col)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void destroy(int **a,int r){
    //Destroy the columns
    for(int row=0;row<r;row++){
        delete []a[row];
    }
    //Destroy the rows
    delete []a;
}

int **filAray(int r,int c){
    //Declare and initialize the 2 Dimensional array
    int **a=new int*[r];
    for(int row=0;row<r;row++){
        a[row]=new int[c];
    }
    //Initialization
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++) 
            a[row][col]=save(100.0f,col/100.0f,row);
    }
    //Return the Array
    return a;
}