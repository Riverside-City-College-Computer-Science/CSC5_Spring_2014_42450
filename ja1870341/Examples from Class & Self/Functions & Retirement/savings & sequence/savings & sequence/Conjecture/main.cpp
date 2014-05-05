/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 28, 2014, 7:58 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
//Global Constants
//Function Prototypes
//void conjecture(0);
int seqLen(int);
int rngLen(int,int);
//Execution
int main(int argc, char** argv) {
//Declare viariables
//Randomly choose a sequence start
srand(static_cast<unsigned int>(time(0)));
seqLen=rand()%5+20; //(20 to 24)
//create variable n & set equal to start of sequence
//n=n%2?3*n+1:n/2;

    return 0;
}
int seqLen(int n) {
    //Calculate the sequence length
    //Initialize counter
    int count=1;
        //Truncate operator. << & >> are shifting seqLenbers left and right 2>>1 2/2
        //2<<1 is 2*2. Because of binary seqLenbers. 111>>1 = 
        do {
        n=n%2?n+(n<<1)+1:n>>1;
        //Above is number =
        //number divided by 2 = 0?
        //
        count++;
        } while (n>1);
        cout<<endl<<"Sequence Length = "<<count<,endl;
        cout<<endl<<"Sequence Length = "
                <<seqLen(strtSeq)<<endl;
        cout<<"For a range of values 20 to"<<strtSeq;
        
        //Return counter
        return count;
}
int rngLen (int strt, int stp) {
    //Initialize the maximum length
    int max=1;
    for (int i=strt;i<=stp;i++) {
        int len=seqLen(i);
        if (max<len)max=len;
    }
    return max;
}








//void conjecture() {
/*    int seqLen, count;
    cout<<"Enter a seqLenber:"<<endl;
    cin>>seqLen;
    do {
    while (seqLen%2==0) {
       seqLen=seqLen/2;
       count++;
       cout<<seqLen<<" is the "<<count<<" seqLenber in the sequence"<<endl;
    }
    while (seqLen%2!=0) {
       seqLen=seqLen*3+1;
       count++;
       cout<<seqLen<<" is the "<<count<<" seqLenber in the sequence"<<endl;
    }
    } while (seqLen!=1);
 * 
 * //Loop until n==1
/*cout<<n<<" ";
do {
    if (n%2)n=3*n-1;
    else n/=2;
    cout<<n<<" ";
}while (n>1);   
 *
 * */

