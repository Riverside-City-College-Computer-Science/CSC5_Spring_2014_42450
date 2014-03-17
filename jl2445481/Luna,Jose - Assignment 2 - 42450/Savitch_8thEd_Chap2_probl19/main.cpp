/* 
 * File:   main.cpp
 * Author: Luna
 *
 * Created on March 17, 2014, 4:14 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int exer1,exer2,exer3,total,pposs1,pposs2,pposs3,tpposs;
    total = exer1+exer2+exer3;
    tpposs=pposs1+pposs2+pposs3;
    
            
    cout <<"How many exercises to input?"<<endl;
    
    cout <<"Score received for exercise 1: "<<endl;
    cin >>exer1;
    
    cout <<"Total points possible for exercise 1: "<<endl;
    cin>>pposs1;
    
    cout <<"Score received for exercise 2: "<<endl;
    cin>>exer2;
    
    cout <<"Total points possible for exercise 2: "<<endl;
    cin>>pposs2;
    
    cout <<"Score received for exercise 3: "<<endl;
    cin>>exer3;
    
    cout <<"Total points possible for exercise 3: ";
    cin>>pposs3;
    
    cout << "Your total is "<<total<<" out of"<<tpposs<<" or"<<endl;
    return 0;
}

