/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 9, 2014, 7:58 AM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <cstring>

using namespace std;

//Global constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int choice;
    bool exitMnu=false;
    
    do{
        //output menu
        cout<<"1. Gaddis/Savitch Prob A Chap Y"<<endl;
        cout<<"2. Gaddis/Savitch Prob B Chap Y"<<endl;
        cout<<"3. Gaddis/Savitch Prob C Chap Y"<<endl;
        cout<<"4. Gaddis/Savitch Prob D Chap Y"<<endl;
        cout<<"Press any other key to Exit"<<endl;
        //input choice
        cin>>choice;
        //solve problem code
        switch(choice){
            case 1:{
                cout<<"Soluion to choice 1 here!"<<endl;
                break;
            }
            case 2:{
                cout<<"Soluion to choice 2 here!"<<endl;
                break;
            }
            case 3:{
                cout<<"Soluion to choice 3 here!"<<endl;
                break;
            }
            case 4:{
                cout<<"Soluion to choice 4 here!"<<endl;
                break;
            }
            default: exitMnu=true;
        }
    }while(!exitMnu);

    return 0;
}

