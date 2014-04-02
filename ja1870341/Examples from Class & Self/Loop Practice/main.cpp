/* 
 * File:   main.cpp
 * Author: BaronsVilla
 *
 * Created on March 29, 2014, 2:19 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    unsigned int short int1, int2, tot;
    cout<<"Enter two numbers"<<endl;
    cin>>int1>>int2;
    tot=(int1*10)+int2;
    while ((int1==1)||(int1==2)||(int1==3)) {
        cout<<"Start Revolution"<<endl;
        int1=((tot-int2)/10);
        cout<<int1<<endl;
        tot++;
        cout<<tot<<endl;
        int2=(tot%10);
        int1=((tot-int2)/10);
        cout<<int1<<endl;
        cout<<"End Revolution"<<endl;
    }

    return 0;
}

