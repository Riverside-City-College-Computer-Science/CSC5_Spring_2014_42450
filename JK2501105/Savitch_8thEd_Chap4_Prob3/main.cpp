/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on June 4, 2014, 7:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Function Prototypes

float StockPrice(int whole, int nr,int dr,int stock);

int main(int argc, char** argv) 
{
    int whole, nr, dr, stock;
    float stockVal = 0;
    char Choice;
    do
    {
        //input whole part
        cout <<"Enter whole part of stock";
        cin >> whole;
        //input fractional part
        cout << "Enter Numerator of fractional part";
        cin >> nr;
        //input deniminator part
        cout << "Enter Denominator of fractional part";
        cin >> dr;
        //input stocks
        cout << "Enter number of stocks";
        cin >> stock;
        //call function
        stockVal = StockPrice(whole,nr,dr,stock);
        cout << "Price of single stock is "<<stockVal<<endl;
        cout << "You want to repeat calculations?";
                cout << "Y / N";
        cin >> Choice;
    }
    while (Choice == 'y' || Choice == 'Y');
}

//Define the function

float StockPrice(int whole, int nr,int dr,int stock)
{
    float price;
    price = static_cast<float>(whole * dr + nr)/(dr * stock);
    return price;
}