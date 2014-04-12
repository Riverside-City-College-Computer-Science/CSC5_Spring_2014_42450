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
                
                case 1: {
                        cout<<"1 problem"<<endl;break;
                }
                case 2: {
                        cout<<"2 problem"<<endl;break;
                }
                case 3: {
                        cout<<"3 problem"<<endl;break;
                }
                case 4: {
                        cout<<"4 problem"<<endl;break;
                }
                case 5: {
                        cout<<"5 problem"<<endl;break;
                }
                
                default: exitMen=true;
                  
        }
        
    } while (!exitMen);

    return 0;
}

