/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on April 11, 2014, 9:05 PM
 */
#include <iostream>

using namespace std;
//Global constants 
//System Libraries 
//Execution
int main(int argc, char** argv) {
    float price1, price2, rate;
    cout<<"Lets calculate last years inflation!"<<endl;
    cout<<"Input the price of an item one year ago, with cents."<<endl;
    cin>>price1;
    cout<<"Input the price of the same item today, with cents."<<endl;
    cin>>price2;
    rate=((price2/price1)-1)*100;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The annual inflation last year was "<<rate<<"%!"<<endl;
    return 0;
}

