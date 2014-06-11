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
const int COLS=7;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;
    //Variables
    bool SENTINEL=true;
    const int SIZE=7;
    int array[SIZE][COLS]={0};
    //sum for each column
    int colSum[COLS-1]={0};
    //sum for each row
    int rowSum[SIZE-1]={0};
    input.open("table.dat",ios::in);//opening data file
    //set up array to add col and row
    for(int row=0;row<SIZE-1;row++){
        for(int col=0;col<SIZE-1;col++){
            input>>array[row][col];
        }
    }
    //add col and row for totals
    int colPos=0,rowPos=0;
    for(colPos;colPos<SIZE-1;colPos++){
        for(int i=0;i<SIZE-1;i++){
            colSum[colPos]+=array[SIZE-1][i];
        }
    }
    for(int k=0;k<SIZE;k++){
        array[SIZE-1][k]=colSum[k];
    }
    for(rowPos;rowPos<SIZE-1;rowPos++){
        for(int i=0;i<SIZE-1;i++){
            rowSum[rowPos]+=array[i][SIZE-1];
        }
    }
    for(int k=0;k<SIZE;k++){
        array[k][SIZE-1]=rowSum[k];
    }
    for(int k=0;k<SIZE;k++){
        array[SIZE-1][SIZE-1]=colSum[k]+rowSum[k];
    }
    //transfer sum data
    output.open("augtable.dat",ios::out);//outputting data file
    for(int row=0;row<7;row++){
        for(int col=0;col<7;col++){
            output<<fixed<<setw(6)<<right
                  <<array[row][col];
        }
    }
    //close the files
    input.close();
    output.close();
    //Exit Stage Right
    return 0;
}

