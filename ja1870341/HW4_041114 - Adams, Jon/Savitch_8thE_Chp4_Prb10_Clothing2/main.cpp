/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11, 2014, 9:38 PM
 */

#include <iostream>

using namespace std;
//Global Constants
//Function Prototypes
//Executioner
int main(int argc, char** argv) {
    //Variables
    unsigned short int height, weight, age;
    float hat, jacket, waist;
    int jsize, wsize;
    //Inputs
    cout<<"Please input your height (whole inches), weight (whole pounds)\n";
    cout<<"and age (years)."<<endl;
    cin>>height>>weight>>age;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //HAT
    hat=(weight/height)*2.9;
    cout<<"Your hat size is: "<<hat<<" inches!"<<endl;
    //JACKET SIZE
    if (age>39) {
        jsize=(((age-39)+9)/10);
        jacket=((height*weight)/288);
        cout<<jsize<<endl;
        cout<<"Your jacket size is "<<jacket<<" and "<<jsize<<"/8 inches!"<<endl;
        cout<<"In 10 years, your jacket size will be:"<<endl;
        cout<<jacket<<" and "<<jsize+1<<"/8 inches!"<<endl;
    }
    else {
        jacket=(height*weight)/288;
        cout<<"Your jacket size is "<<jacket<<" inches!"<<endl;
    }
    //WAIST SIZE
    if (age>28) {
        wsize=(((age-28)+2)/2);
        waist=(weight/5.7);
        cout<<"Your waist size is "<<waist<<" and "<<wsize<<"/10 inches!"<<endl;
        cout<<"In 10 years, your waist size will be:"<<endl;
        cout<<waist<<" and "<<wsize+5<<"/10 inches!"<<endl;
    }
    else {
       waist=(weight/5.7);
       cout<<"Your waist size is "<<waist<<" inches!"<<endl;
    }
    return 0;
}

