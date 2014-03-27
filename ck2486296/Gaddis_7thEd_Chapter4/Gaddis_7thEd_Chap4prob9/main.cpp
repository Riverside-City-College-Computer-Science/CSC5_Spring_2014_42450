/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 *math tutor v2.0
 * Created on March 26, 2014, 1:13 PM
 */
//system libs
#include <iostream>
#include <cstdlib>
#include <ctime>


//global constants 

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
    //random num seed 
    srand (time(NULL));
    //declare variables  
    short num1 = rand()%999+1;
    short num2 = rand()%999+1;
    short ans;
    //calculation
    short total=num1+num2;
    //output
    cout<<num1<<" + "<<num2<<" = ";
    cin>>ans;
    if(ans==total){
        cout<<"congrats you got the correct answer"<<endl;         
    }
    else
        cout<<"sorry the correct answer is "<<total<<endl;
        
    return 0;
}
