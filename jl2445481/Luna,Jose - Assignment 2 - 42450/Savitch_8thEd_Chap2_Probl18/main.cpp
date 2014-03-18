/* 
 * File:   main.cpp
 * Author: Luna
 *
 * Created on March 17, 2014, 4:00 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float weight,height,age,bmrm,bmrf;
    char sex;
    cout << "Enter your weight in pounds, height in inches, age in years,and sex"
          <<endl;
    cin >> weight>>height>>age>>sex;
    
    if (sex=='m' || sex=='M')
    {
        bmrm=655+(4.3*weight)+(4.7*height)-(4.7*age);
        cout <<bmrm;
    }
    else if (sex =='f' || sex=='F')
    {
        bmrf=66+(6.3*weight)+(12.9*height)-(6.8*age);
        cout <<bmrf;
    }

    return 0;
}

