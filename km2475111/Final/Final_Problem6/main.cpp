/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 8, 2014, 4:01 PM
 * Purpose: CSC5 Final
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=6;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;
    //Declare file name
    string inFile="table.dat";
    char outFile[]="augtable.dat";
    //Variables
    bool SENTINEL=true;
    const int SIZE=6;
    int num;
    int array[SIZE][COLS];//6x6 grid
    int nArray[SIZE+1][COLS+1];//7x7 grid
    //sum for each column
    int colSum[COLS]={0};
    //sum for each row
    int rowSum[SIZE]={0};
    input.open(inFile.c_str());//opening data file
    output.open(outFile);//outputting data file
    //set up array to add col and row
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            input>>array[row][col];
        }
    }
    //add col and row for totals
    int cnt=0;
    int colPos=0,rowPos=0;
    while(SENTINEL){
        for(int i=0;i<SIZE;i++){
            colSum[colPos]+=array[i][colPos];//loops and adds column 1 together
            if(i>=6){
                nArray[6][colPos]=colSum[colPos];//adds sum to new array
            }
        }
        colPos++;
        if(colPos>=6){
            SENTINEL=false;
        }
    }
    SENTINEL=true;
    while(SENTINEL){
        for(int i=0;i<SIZE;i++){
            rowSum[rowPos]+=array[rowPos][i];//loops and adds column 1 together
            if(i>=6){
                nArray[rowPos][6]=rowSum[rowPos];//adds sum to new array
            }
        }
        rowPos++;
        if(rowPos>=6){
            SENTINEL=false;
        }
    }
    //move rest of the 6x6 contents to new 7x7
    for(int row=0;row<SIZE;row++){
        for(int col=0;col<SIZE;col++){
            nArray[row][col]=array[row][col];
        }
    }
    //output to file
    for(int row=0;row<7;row++){
        for(int col=0;col<7;col++){
            output<<fixed<<setw(4);
            output<<nArray[row][col];
        }
    }
    //close the files
    input.close();
    output.close();
    //Exit Stage Right
    return 0;
}

