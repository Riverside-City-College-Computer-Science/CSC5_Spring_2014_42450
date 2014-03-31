/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 15, 2014, 9:40 PM
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    int price;
    int invoiceAmount;

public:
    Invoice(string initPartNumber, string initPartDescription, int initQuantity, int initPrice);
    void setPartNumber(string);
    string getPartNumber();
    void setPartDescription(string);
    string getPartDescription();
    void setQuantity(int);
    int getQuantity();
    void setPrice(int);
    int getPrice();
    int getInvoiceAmount(int, int);

};
// initialization with constructor

Invoice::Invoice(string initPartNumber, string initPartDescription, int initQuantity, int initPrice) {
    setPartNumber(initPartNumber);
    // cout << "Part Number set completed" << endl; // uncomment it if you want to see sequence

    setPartDescription(initPartDescription);
    // cout << "Description set completed" << endl; // uncomment it if you want to see sequence

    // if number is positive
    if (initQuantity >= 0) {
        setQuantity(initQuantity);
        //cout << "Number set completed" << endl; // uncomment it if you want to see sequence
    }
    // if number is not positive it set as 0
    if (initQuantity < 0) {
        quantity = 0;
        cout << "Number can not be negative and set as 0" << endl;
    }
    // if number is positive
    if (initPrice >= 0) {
        setPrice(initPrice);
        // cout << "Price set completed" << endl; // uncomment it if you want to see sequence
    }
    // if number is not positive it set as 0
    if (initPrice < 0) {
        price = 0;
        cout << "Price can not be negative and set as 0" << endl;
    }
}

//set function for Part Number

void Invoice::setPartNumber(string initPartNumber) {
    partNumber = initPartNumber;
}

//get function for Part Number

string Invoice::getPartNumber() {
    return partNumber;
}

//function for set desc

void Invoice::setPartDescription(string initPartDescription) {
    partDescription = initPartDescription;
}

//function for get desc

string Invoice::getPartDescription() {
    return partDescription;
}

//function for set number

void Invoice::setQuantity(int initQuantity) {
    quantity = initQuantity;
}

//function for get number

int Invoice::getQuantity() {
    return quantity;
}

//function for set price

void Invoice::setPrice(int initPrice) {
    price = initPrice;
}

//function for get price

int Invoice::getPrice() {
    return price;
}

//function for get invoice amount

int Invoice::getInvoiceAmount(int iQuantity, int iPrice) {
    if ((iQuantity < 0) || (iPrice < 0)) {
        cout << "Incorrect args!" << endl;
    } else {
        invoiceAmount = iQuantity * iPrice;
    }
    return invoiceAmount;
}

int main() {
    // initialization with constructor
    Invoice invoice1("Part_123", "one paper", -7, 2000);
    Invoice invoice2("Part_234", "long", 20, 50000);

    // output constructor results
    cout << "\nNew invoice details: \nPart Number: " << invoice1.getPartNumber()
            << "\nDescription: " << invoice1.getPartDescription()
            << "\nQuantity: " << invoice1.getQuantity()
            << "\nPrice: " << invoice1.getPrice() << endl;

    cout << "\nNew invoice details: \nPart Number: " << invoice2.getPartNumber()
            << "\nDescription: " << invoice2.getPartDescription()
            << "\nQuantity: " << invoice2.getQuantity()
            << "\nPrice: " << invoice2.getPrice() << endl;

    // get price and quantity by get functions
    int x1 = invoice1.getQuantity();
    int y1 = invoice1.getPrice();
    int x2 = invoice2.getQuantity();
    int y2 = invoice2.getPrice();

    // calculate invoice by getInvoiceAmount function
    cout << "\n1 amount is " << invoice1.getInvoiceAmount(x1, y1) << endl;
    cout << "2 amount is " << invoice2.getInvoiceAmount(x2, y2) << endl;

    cout << endl;

    // test program that using data entered by user
    cout << "*** Test Program ***";

    // variables
    string p_Number;
    string p_Desc;
    int ppi;
    int p_Quantity;

    // get data from user
    cout << "\nPlease enter Part Number: ";
    cin >> p_Number;
    cout << "Please enter Part Description: ";
    cin >> p_Desc;
    cout << "Please enter Price Per Item: ";
    cin >> ppi;
    cout << "Please enter Quantity: ";
    cin >> p_Quantity;

    //using set functions
    invoice1.setPartNumber(p_Number);
    invoice1.setPartDescription(p_Desc);
    invoice1.setPrice(ppi);
    invoice1.setQuantity(p_Quantity);

    // using get functions, invoice amount function and output result
    cout << "\nPart number is " << invoice1.getPartNumber();
    cout << "\nPart description is " << invoice1.getPartDescription();
    cout << "\nPrice is " << invoice1.getPrice();
    cout << "\nQuantity is " << invoice1.getQuantity();
    cout << "\nInvoice amount is " << invoice1.getInvoiceAmount(invoice1.getPrice(), invoice1.getQuantity());

}
