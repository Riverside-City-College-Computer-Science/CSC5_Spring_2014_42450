/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 26, 2014, 2:40 PM
 * Purpose: To assign reward points with how many books purchased
 */

//System Properties
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int books,points;
    //Input the number of books bought this month
    cout<<"Please input the number of books you bought this month."<<endl;
    cout<<"Books Bought:"<<endl;
    cin>>books;
    //Calculate how many points the person gets
    if (books>=4)
    {
        points=60;
        cout<<endl;
        cout<<"Congratulations! You are getting "<<points;
        cout<<" award points this month!"<<endl;
    }
    else if (books==3)
    {
        points=30;
        cout<<endl;
        cout<<"Woo Hoo! You are getting "<<points;
        cout<<" award points this month!"<<endl;
    }
    else if (books==2)
    {
        points=15;
        cout<<endl;
        cout<<"Right on! You are getting "<<points;
        cout<<" award points this month!"<<endl;
    }
    else if (books==1)
    {
        points=5;
        cout<<endl;
        cout<<"Keep buying! You are getting "<<points;
        cout<<" award points this month."<<endl;
    }
    else
    {
        (books==0);
        points=0;
        cout<<"Whoops! Get to those aisles and buy books!";
        cout<<" You are getting "<<points<<" award points this month. :("<<endl;
    }
    return 0;
}

