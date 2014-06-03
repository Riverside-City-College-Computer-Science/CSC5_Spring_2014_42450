/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 27, 2014, 4:06 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=2; //number and frequency

//Function Prototypes
void getNum(int [], int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;    
    const int SIZE=50;
    int array[SIZE];
    //Open input and output files
    input.open("input.dat"); 
    output.open("output.dat");
    //Function Call
    getNum(array,SIZE);
    //Close opened input and output files
    input.close();
    output.close();
    //Exit Stage Right
    return 0;
}

void getNum(int a[], int i, ifstream input){
    //Read through file, retrieve numbers and set them as array values
    while (input>>a[i]){ 
    }
}

void freq(int f[], int n, int a[], int ){
    
}