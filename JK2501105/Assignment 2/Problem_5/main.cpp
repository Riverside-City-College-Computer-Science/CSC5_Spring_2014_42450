//
//  main.cpp
//  final pruebas
//
//  Created by JuLio on 6/10/14.
//  Copyright (c) 2014 JuLio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random(int NUM ){
    
    srand(time(0));
    
    int randomseq;
    for (int i = 0; i <= 10000; ++i) {
        randomseq = ((int[]) {9, 51, 78, 181, 208})[rand() % 5];
    }
    return randomseq;
}


int main(int argc, const char * argv[])
{
    srand(static_cast<int>(time(0)));
    
    const int n=5;
    
    const int ntimes=10000;
    
    int freq[n];
    
    srand(time(0));
    int NUM;
    
    int randomseq;
    for (int i = 0; i <= n; ++i) {
        randomseq = ((int[]) {9, 51, 78, 181, 208})[rand() % 5];
    }
    
 
    short int rndseq[]={9,51,78,181,208};
    
    int numbers;
    for (int i = 0; i <= 4; ++i)
    {
        numbers = rand() % 1000 + 1;
        cout<<rndseq[i]<<" occured "<<freq[i]<<" times"<<endl;
        
    }
    
    
    
}