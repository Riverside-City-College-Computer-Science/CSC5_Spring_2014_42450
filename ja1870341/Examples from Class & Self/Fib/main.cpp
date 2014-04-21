/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 7, 2014, 8:09 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float pop1, rate, period;
    
    cout<<"Input starting population size in whole pounds"<<endl;
    cin>>pop1;
    cout<<"Input the population's growth rate (how often does it double)\n"
    cout<<" in whole days?"<<endl;
    cin>>rate;
    cout<<"Input # of days you want to allow population to grow"<<endl;
    cin>>period;
    
    for (pop1; ((period/rate)>0); ((period/rate)--)) {
        pop1
    }
            
            

    return 0;
}

