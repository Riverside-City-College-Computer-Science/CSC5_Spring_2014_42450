/* 
 * File:   main.cpp
 * Author: Zachery Ludwin
 * Created on May 27, 2014, 7:43 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Global Constants
const int NUMBER_OF_PLANTS=4;

//Function Prototypes
void input_data(int a[], int last_plant_number);

//Execution Begins Here
int main(int argc, char** argv) {
    
    cout<<"This program displays a vertical graph."<<endl;
    cout<<" "<<endl;
    
    int values[] = {2,5,1,9,3}, cols = 5, max = 9;

for (int r = 0; r < max; ++r) {
    for (int c = 0; c < cols; ++c)
        cout << (r + values[c] >= max ? '*' : ' ');
    cout << endl;
}
    
    return 0;
}

