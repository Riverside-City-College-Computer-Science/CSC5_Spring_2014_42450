/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on June 8, 2014, 6:49 PM
 * Purpose: CSC5 Final
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

//Global Constants
const int COLS=15;//problem 5
const int COLS_2=7;//problem 6
//Function Prototypes
//Problem 1
unsigned short reverse(unsigned short);
//Problem 3
void fillVec(vector<int> &,vector<int> &,int);
void prntVec(vector<int> &,vector<int> &,int);
//Problem 5
void filAray(char [][COLS],int,int,fstream &);
void prntAry(char [][COLS],int,int);
void prntAry(vector<string>,int);
void sort(char [][COLS],int,int,vector<string> &);
//Problem 6

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int choice;
    bool loop=true;
    //Problem 1
    const int MAXVALU=65535;
    unsigned short num,revNum;
    //Problem 2
    //set rand
    srand(static_cast<unsigned int>(time(0)));
    //declare variables
    unsigned int number=rand()%1000+1;//range of 1-1000
    unsigned int guess,tries=0;
    bool cntLoop=true;
    //Problem 3
    unsigned int size;
    //Problem 4
    const int n=5,ntimes=10000;
    int freq[n]={0};
    short int rndseq[]={9,51,78,181,208};
    unsigned char roll;
    unsigned int repeat=10000;
    //Problem 5
    //array
    const int SIZE=10;
    char arry[SIZE][COLS];
    vector<string> sortAry;
    //Problem 6
    //Declare Variables
    //Declare Variables
    ifstream input;
    ofstream output;
    //Variables
    bool SENTINEL=true;
    const int SIZE_2=7;
    int array[SIZE_2][COLS_2]={0};
    //sum for each column
    int colSum[COLS_2-1]={0};
    //sum for each row
    int rowSum[SIZE_2-1]={0};
    //loop until user says to quit
    do{
        //ask user for which problem they wish to go to
        cout<<"Which problem do you wish to test?"<<endl
            <<"1. CSC5 Final Problem 1"<<endl
            <<"2. CSC5 Final Problem 2"<<endl
            <<"3. CSC5 Final Problem 3"<<endl
            <<"4. CSC5 Final Problem 4"<<endl
            <<"5. CSC5 Final Problem 5"<<endl
            <<"6. CSC5 Final Problem 6"<<endl
            <<"Press any other key to quit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{//problem 1
                //Ask for number
                cout<<"Enter a number: ";
                cin>>num;
                //check if number or number rev is bigger than unsigned short
                revNum=reverse(num);
                if(num>MAXVALU||revNum>MAXVALU){
                    cout<<"No Conversion Possible."<<endl;
                }else{
                    //reverse number
                    //revNum=reverse(num);
                    cout<<num<<" reversed is "<<revNum<<endl;
                }
                cout<<endl;
                break;
            }
            case 2:{//problem 2
                //check to see if the guess is close to rand num
                while(cntLoop){
                    //ask player for guess
                    cout<<"Guess a number between 1-1000: ";
                    cin>>guess;
                    cin.ignore();
                    if(tries>=10){
                        break;
                    }
                    if(guess>number) {
                        cout<<"Too high! Try again."<<endl;
                    }else if(guess<number) {
                        cout<<"Too low! Try again."<<endl;
                    }else{
                        break;
                    }
                    tries++;
                }
                // Check for tries.
                if(tries>=10){
                    cout << "You ran out of tries! Game Over."<<endl<<endl;
                }else{
                    // Or, user won.
                    cout<<"Congratulations!!"<<endl
                        <<"You got the number in "<<tries<<" tries!"<<endl;
                }
                cout<<endl;
                break;
            }
            case 3:{//problem 3
                //ask for size
                cout<<"How many numbers are in the vectors? ";
                cin>>size;
                //declare vectors
                vector<int> odd;
                vector<int> even;
                //fill vectors
                fillVec(odd,even,size);
                //output
                prntVec(odd,even,size);
                cout<<endl;
                break;
            }
            case 4:{//problem 4
                //loop
                for(int toss=1;toss<repeat;toss++){
                    //determine sum
                    roll=rand()%5;//gives 0-4
                    switch(roll){
                        case 0:freq[roll]++;break;
                        case 1:freq[roll]++;break;
                        case 2:freq[roll]++;break;
                        case 3:freq[roll]++;break;
                        case 4:freq[roll]++;break;
                        default:cout<<"Never get here!!!"<<endl;
                    }
                }
                cout<<"9 was thrown "<<freq[0]<<" times."<<endl;
                cout<<"51 was thrown "<<freq[1]<<" times."<<endl;
                cout<<"78 was thrown "<<freq[2]<<" times."<<endl;
                cout<<"181 was thrown "<<freq[3]<<" times."<<endl;
                cout<<"208 was thrown "<<freq[4]<<" times."<<endl;
                cout<<endl;
                break;
            }
            case 5:{//problem 5
                //open file input.dat
                fstream file;
                file.open("input.dat");
                //fill array
                filAray(arry,SIZE,COLS,file);
                //print before sort
                cout<<"Before sort:"<<endl;
                prntAry(arry,SIZE,COLS);
                //sort
                sort(arry,SIZE,COLS,sortAry);
                //print array after sort
                cout<<"After Sort:"<<endl;
                prntAry(sortAry,SIZE);
                //exit stage right!!
                cout<<endl;
                file.close();
                break;
            }
            case 6:{//problem 6
                input.open("table.dat",ios::in);//opening data file
                //set up array to add col and row
                for(int row=0;row<SIZE-1;row++){
                    for(int col=0;col<SIZE-1;col++){
                        input>>array[row][col];
                    }
                }
                //add col and row for totals
                int colPos=0,rowPos=0;
                for(colPos;colPos<SIZE-1;colPos++){
                    for(int i=0;i<SIZE-1;i++){
                        colSum[colPos]+=array[SIZE-1][i];
                    }
                }
                for(int k=0;k<SIZE;k++){
                    array[SIZE-1][k]=colSum[k];
                }
                for(rowPos;rowPos<SIZE-1;rowPos++){
                    for(int i=0;i<SIZE-1;i++){
                        rowSum[rowPos]+=array[i][SIZE-1];
                    }
                }
                for(int k=0;k<SIZE;k++){
                    array[k][SIZE-1]=rowSum[k];
                }
                for(int k=0;k<SIZE;k++){
                    array[SIZE-1][SIZE-1]=colSum[k]+rowSum[k];
                }
                //transfer sum data
                output.open("augtable.dat",ios::out);//outputting data file
                for(int row=0;row<7;row++){
                    for(int col=0;col<7;col++){
                        output<<fixed<<setw(6)<<right
                              <<array[row][col];
                    }
                }
                //close the files
                input.close();
                output.close();
                break;
            }
            default:{
                cout<<"Goodbye."<<endl;
                loop=false;
            }
        }
    }while(loop);
    
    //Exit Stage Right!!
    return 0;
}
//Problem 1
unsigned short reverse(unsigned short num){ 
    unsigned int rev=0;//use int to check range 
    for(;num;){ 
    rev*=10; 
    rev+=(num%10); 
    num/=10; 
    } 
    if(rev<=((unsigned short)-1)){//check range 
        return rev; 
    }else{
        return 0;
    }
}
//Problem 3
void fillVec(vector<int> &odd,vector<int> &even,int size){
    for(int i=0;i<size;i++){
        odd.push_back(1+(2*(rand()%size+1)));
        even.push_back(2*(rand()%size+1));
    }
}
void prntVec(vector<int> &odd,vector<int> &even,int size){
    cout<<"Odd Vector : ";
    for(int i=0;i<size;i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    cout<<"Even Vector: ";
    for(int i=0;i<size;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
}
//Problem 5
void filAray(char a[][COLS],int r,int c,fstream &file){
    //fill array
    for(int rowPos=0;rowPos<r;rowPos++){
        for(int colPos=0;colPos<c;colPos++){
            a[rowPos][colPos]=file.get();//grabs char from file
        }
    }
}
void prntAry(char a[][COLS],int r,int c){
    //print all the data in the array
    //initialize 2D array
    for(int rowPos=0;rowPos<r;rowPos++){
        for(int colPos=0;colPos<c;colPos++){
            cout<<a[rowPos][colPos];
        }
        cout<<endl;
    }
}
void prntAry(vector<string> a,int r){
    for(int i=0;i<r;i++){
        cout<<a[i]<<endl;
    }
}
void sort(char a[][COLS],int r,int c,vector<string> &sorted){
    //convert array to strings for sort
    string arr[r];
    int rowPos=0;
    bool SENTINEL=true;
    //concatenate char into str for sort
    while(SENTINEL){
        for(int colPos=0;colPos<c;colPos++){
            arr[rowPos].push_back(a[rowPos][colPos]);
        }
        rowPos++;
        if(rowPos>=10){
            SENTINEL=false;
        }
    }
    //compare strings and sort
    for(int j=0;j<sizeof(arr);j++){ 
        for(int i=0;i<r;i++){
            if(arr[i]<arr[i+1]){
                string temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
            }
        }
    }
    //return sorted str(?)
    for(int i=0;i<r;i++){
        sorted.push_back(arr[i]);
    }
    cout<<endl;
}

