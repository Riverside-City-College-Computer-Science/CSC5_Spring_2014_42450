/* 
 * NAME: Ezra Guinmpang
 * DATE: May 12, 2014, 7:58 AM
 * PURPOSE: Sieve of Eratosthenes - finding Primes
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
//Global variables and constants

//Function prototypes
void fillAR(int[], int);
void printAR(int[], int, int);
void prime(int[], int);
//Execution begins HERE
int main(int argc, char** argv){
    srand(static_cast<int>(time(0)));
    const int SIZE = 500001;
    int a_Num[SIZE];
    fillAR(a_Num, SIZE);
    printAR(a_Num, SIZE, 10);
    prime(a_Num, SIZE);
    printAR(a_Num, SIZE, 10);
    return 0;
}
//Function definitions
void fillAR(int num[], int n){
    for(int i = 0; i < n; i++){
        num[i] = i;
    }
}
void printAR(int num[], int n, int perline){
    int iter;
    cout << endl;
    for(int i = 0; i < n; i++){
        if(num[i] != 0){
            cout << num[i] << " ";
            if(iter++ % perline == (perline - 1)) cout << endl;
        }
    }
    cout << endl;
    cout << "There are " << iter << " primes between 1 and 500000" << endl;
}
void prime(int num[], int n){
    //Examine each position in the list up to its square root
    for(int pos = 2; pos < sqrt(n); pos++){
        //Increment by the factor to test for prime
        for(int ctr = 2*pos; ctr < n; ctr += pos){
            num[ctr] = 0;
        }
    }
}