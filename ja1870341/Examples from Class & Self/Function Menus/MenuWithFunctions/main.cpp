/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 9, 2014, 8:02 AM
 */

#include <iostream>

using namespace std;
//Globals
//Functions
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
//Execution
int main(int argc, char** argv) {
    int choose;
    bool exitMen=false;
    
    do {
        cout<<"Choose problem"<<endl;
        cout<<"1 problem"<<endl;
        cout<<"2 problem"<<endl;
        cout<<"3 problem"<<endl;
        cout<<"4 problem"<<endl;
        cout<<"5 problem"<<endl;
        cin>>choose;
        
        switch(choose) {
                
                case 1:problem1();break;
                case 2:problem2();break;
                case 3:problem3();break;
                case 4:problem4();break;
                case 5:problem5();break;
                
                default: exitMen=true;
                  
        }
        
    } while (!exitMen);

    return 0;
}

void problem1(){
    cout<<"1 problem"<<endl;
}
void problem2(){
    cout<<"2 problem"<<endl;
}
void problem3(){
    cout<<"3 problem"<<endl;
}
void problem4(){
    cout<<"3 problem"<<endl;
}
void problem5(){
    cout<<"3 problem"<<endl;
}
