/*
 * NAME: Ezra Guinmapang
 * DATE: April 30, 2014
 * PURPOSE: Program Menu for Savitch, 8th Editiion, Chapter 5 Problem Set
 */
//Libraries
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
using namespace std;
//Global variables and constants: NONE
//Function Prototypes:
int Prob6(); //Runs Problem 6
void EngInL(float &, float &); //request input from user
void MetOutL(float &,float &); //Calls the EngMetL() function and output results
void EngMetL(float &, float&); //Performs length conversion from English to Metric
int Prob7(); //Runs Problem 7
void MetInL(float &, float &); //request input from user
void EngOutL(float &,float &); //Calls the MetEngL() function and output results
void MetEngL(float &, float&); //Performs length conversion from Metric to English
int Prob8(); //Runs Problem 8
void L_In(float &, float &, char &); //Takes the user input
void L_Conv(float &, float &, char &); //Performs conversion
void L_Out(float &, float &, char &); //Calls L_Conv()function and outputs results
int Prob9(); //Runs Problem 9
void EngInW(float &, float &); //request input from user
void MetOutW(float &,float &); //Calls EngMetW() function and output results
void EngMetW(float &, float&); //Performs weight conversion from English to Metric
int Prob10(); //Runs Problem 10
void MetInW(float &, float &); //request input from user
void EngOutW(float &,float &); //Calls the MetEngW() function and output results
void MetEngW(float &, float&); //Performs weight conversion from Metric to English
int Prob11(); //Runs Problem 11
void W_In(float &, float &, char &); //Takes the user input
void W_Conv(float &, float &, char &); //Performs conversion
void W_Out(float &, float &, char &); //Calls W_Conv()function and outputs results
int Prob12();
char Input(float &, float &, char &); //Takes the user input
void Convert(float &, float &, char &, char); //Performs conversion
void Output(float &, float &, char &, char); //Calls Convert()function and outputs results
int Prob15(); //Runs Problem 15
bool Shoot(bool &, float &); //Shoots at the target
char StartDuel(bool, bool, bool, float, float, float, char); //Simulates the duel
int Prob16(); //Runs Problem 16
int Prob17(); //Runs problem 17
void GetInput(int &, int &, int &); //Gets the user input
bool isLeap(int); //returns true if year is Leap, false if not
int v_Cent(int); //returns century value
int v_Year(int); //returns year value
int v_Month(int, int); //returns month value
int DayOfWk(int, int, int); //returns the day of the week using century, year, and month values
//Execution begins HERE
int main(int argc, char** argv){
    //Your code here
    char mChoice[3];
        cout << "**************************************************\n";
        cout << "**        CSC-5: C++ ASSIGNMENT Savitch Ch 5    **\n";
        cout << "**                 PROGRAM MENU                 **\n";
        cout << "**           NAME: EZRA P. GUINMAPANG           **\n";
        cout << "**                SECTION: 42450                **\n";
        cout << "**           PROFESSOR: DR. MARK LEHR           **\n";
        cout << "**************************************************\n";
    do{
        cout << "**************************************************\n";
        cout << "**          AVAILABLE SOLUTIONS TO RUN:          **\n";
        cout << "**                                               **\n";
        cout << "**            1. Problem 6 Solution              **\n";
        cout << "**            2. Problem 7 Solutions             **\n";
        cout << "**            3. Problem 8 Solution              **\n";
        cout << "**            4. Problem 9 Solution              **\n";
        cout << "**            5. Problem 10 Solution             **\n";
        cout << "**            6. Problem 11 Solution             **\n";
        cout << "**            7. Problem 12 Solution             **\n";
        cout << "**            8. Problem 15 Solution             **\n";
        cout << "**            9. Problem 16 Solution             **\n";
        cout << "**            10. Problem 17 Solution            **\n";
        cout << "**************************************************\n";
        cout << "\nWhich program would you like to run? ";
        cout << "Enter the number of the program you wish to run: ";
        cin >> mChoice;
        switch(mChoice[0]){
            case '1': if (mChoice[1] == '0') Prob17();
                      else if(Prob6());
                      break;
            case '2': Prob7(); break;
            case '3': Prob8(); break;
            case '4': Prob9(); break;
            case '5': Prob10(); break;
            case '6': Prob11(); break;
            case '7': Prob12(); break;
            case '8': Prob15(); break;
            case '9': Prob16(); break;
            default: break;
        }
        cout << "Do you wish to run another program(Y/N)? ";
        cin >> mChoice;
    }while(mChoice[0] == 'Y' || mChoice[0] == 'y');
    //Execution ends HERE
    return 0;
}
//Function definitions:
//Problem 6 functions
int Prob6(){
    char Repeat; //Declare variable used outside the loop
    do{
        float length1, length2; //Declare variables used inside the loop
        EngInL(length1, length2);
        MetOutL(length1,length2);
        cout << "Again(Y/N)? ";
        cin >> Repeat;
    }while(Repeat == 'Y' || Repeat == 'y');
    return 0;
}
void EngInL(float &length1, float &length2){
    cout << "Enter length to be converted in m and cm (separated by a space): ";
    cin >> length1 >> length2; //takes lengths to be converted
    while(length1 < 0 || length2 < 0){ //Input validation
        int length1;
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Enter length to be converted in m and cm (separated by a space): ";
        cin >> length1 >> length2;
    }
}
void EngMetL(float &length1, float &length2){
    length2 += length1*12.0f; //convert ft to inches and add up all inches
    length2 *= 2.54f; //convert to cm
    if(length2 < 100){ //catches conversions less than 1 m
            length1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 m
            length1 = length2/100.0f;
            length2 = (length1 - static_cast<int>(length1))*100.0f;
            length1 = static_cast<int>(length1);
    }
}
void MetOutL(float &length1, float &length2){
    cout << "You entered " << length1 << "ft " << length2 << "inches\n";
    EngMetL(length1,length2); //Perform the conversion
    cout << "Metric conversion: " << length1 << "m " << length2 << "cm\n";
}
//Problem 7 functions
int Prob7(){
    char Repeat; //Declare variable used outside the loop
    do{
        float length1, length2; //Declare variables used inside the loop
        MetInL(length1, length2);
        EngOutL(length1,length2);
        cout << "Again(Y/N)? ";
        cin >> Repeat;
    }while(Repeat == 'Y' || Repeat == 'y');
    return 0;
}
void MetInL(float &length1, float &length2){
    cout << "Enter length to be converted in m and cm (separated by a space): ";
    cin >> length1 >> length2; //takes lengths to be converted
    while(length1 < 0 || length2 < 0){ //Input validation
        int length1;
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Enter length to be converted in m and cm (separated by a space): ";
        cin >> length1 >> length2;
    }
}
void MetEngL(float &length1, float &length2){
    length2 += length1*100.0f; //convert m to cm and add up all cm
    length2 *= 3.93701e-1f; //convert to inches
    if(length2 < 12){ //catches conversions less than 1 foot
            length1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 foot
            length1 = length2/12.0f;
            length2 = (length1 - static_cast<int>(length1))*12.0f;
            length1 = static_cast<int>(length1);
    }
}
void EngOutL(float &length1, float &length2){
    cout << "You entered " << length1 << "m " << length2 << "cm\n";
    MetEngL(length1,length2); //Perform the conversion
    cout << "English conversion: " << length1 << "ft " << length2 << "inches\n";
}
//Problem 8 functions
int Prob8(){
    char ctype; //Declare variable used outside the loop
    do{
        float length1, length2; //Declare variables used inside loop
        L_In(length1, length2, ctype);
        L_Out(length1, length2, ctype);
        cout << "Again(Y/N)? ";
        cin >> ctype; //reuse variable ctype for exit loop input
    }while(ctype == 'Y' || ctype =='y');
    //Execution ends HERE
    return 0;
}
void L_In(float &length1, float &length2, char &ctype){
    cout << "Which conversion would you like to perform?\n";
    cout << "1. Metric to English\n";
    cout << "2. English to Metric\n";
    cout << "Please enter 1 or 2: "; //Prompts user for input
    cin >> ctype; //takes conversion type
    while(ctype != '1' && ctype != '2'){ //Input validation
        cout << "Invalid selection. Try again.";
        cout << "Which conversion would you like to perform?\n";
        cout << "1. Metric to English\n";
        cout << "2. English to Metric\n";
        cout << "Please enter 1 or 2: ";
        cin >> ctype;
    }
    cout << "Now enter the values to be converted in ";
    (ctype == '1') ? cout << "m and cm " : cout << "ft and inches ";
    cout << "separated by a space: ";
    cin >> length1 >> length2; //takes lengths to be converted
    while(length1 < 0 && length2 < 0){ //Input validation
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Now enter the values to be converted in ";
        (ctype == '1') ? cout << "m and cm " : cout << "ft and inches ";
        cout << "separated by a space: ";
        cin >> length1 >> length2; //takes lengths to be converted
    }
}
void L_Conv(float &length1, float &length2, char &ctype){
    float factor, conv, chk; //factor for source units, conversion factor, and destination units
    switch(ctype){
        case '1': factor = 100.0f; conv = 3.93701e-1f; chk = 12.0f; break; //Metric to English
        case '2': factor = 12.0f; conv = 2.54f; chk = 100.0f; break; //English to Metric
        default: cout << "Invalid conversion choice.\n"; break;
    }
    length2 += length1*factor; //unify units under 1 common unit
    length2 *= conv; //convert units
    if(length2 < chk){ //catches conversions less than 1 base unit
        length1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 base unit
        length1 = length2/chk;
        length2 = (length1 - static_cast<int>(length1))*chk;
        length1 = static_cast<int>(length1);
    }
}
void L_Out(float &length1, float &length2, char &ctype){
    cout << "You entered ";
    switch(ctype){
        case '1':{ //Output English units
            cout << length1 << "m " << length2 << "cm.\n";
            L_Conv(length1, length2, ctype); //Perform the conversion
            cout << "English equivalent: " << length1 << "ft " << length2 << "inches.\n";
            break;
        }
        case '2':{ //Output Metric units
            cout << length1 << "ft " << length2 << " inches.\n";
            L_Conv(length1, length2, ctype); //Perform the conversion
            cout << "Metric equivalent: " << length1 << "m " << length2 << "cm.\n";
            break;
        }
    }
}
//Problem 9 functions
int Prob9(){
    char Repeat; //Declare variable used outside the loop
    do{
        float wt1, wt2; //Declare variables used inside the loop
        EngInW(wt1, wt2);
        MetOutW(wt1,wt2);
        cout << "Again(Y/N)? ";
        cin >> Repeat;
    }while(Repeat == 'Y' || Repeat == 'y');
    //Execution ends HERE
    return 0;
}
void EngInW(float &wt1, float &wt2){
    cout << "Enter weight to be converted in lbs and oz (separated by a space): ";
    cin >> wt1 >> wt2; //takes weights to be converted
    while(wt1 < 0 || wt2 < 0){ //Input variables
        int wt1;
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Enter weight to be converted in lbs and oz (separated by a space): ";
        cin >> wt1 >> wt2;
    }
}
void EngMetW(float &wt1, float &wt2){
    wt2 += wt1*16.0f; //convert lbs to oz and adds up all oz
    wt2 *= 28.3495; //convert to grams
    if(wt2 < 1000){ //catches conversions less than 1 kg
        wt1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 kg
        wt1 = wt2/1000.0f;
        wt2 = (wt1 - static_cast<int>(wt1))*1000.0f;
        wt1 = static_cast<int>(wt1);
    }
}
void MetOutW(float &wt1, float &wt2){
    cout << "You entered " << wt1 << "lbs " << wt2 << "oz\n";
    EngMetW(wt1,wt2); //Perform the conversion
    cout << "Metric conversion: " << wt1 << "kg " << wt2 << "g\n";
}
//Problem 10 functions
int Prob10(){
    char Repeat; //Declare variable used outside the loop
    do{
        float wt1, wt2; //Declare variables used inside the loop
        MetInW(wt1, wt2);
        EngOutW(wt1,wt2);
        cout << "Again(Y/N)? ";
        cin >> Repeat;
    }while(Repeat == 'Y' || Repeat == 'y');
    //Execution ends HERE
    return 0;
}
void MetInW(float &wt1, float &wt2){
    cout << "Enter weight to be converted in kg and grams (separated by a space): ";
    cin >> wt1 >> wt2; //takes weights to be converted
    while(wt1 < 0 || wt2 < 0){ //Input validation
        int wt1;
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Enter weight to be converted in kg and grams (separated by a space): ";
        cin >> wt1 >> wt2;
    }
}
void MetEngW(float &wt1, float &wt2){
    wt2 += wt1*16.0f; //convert kg to grams and adds up all grams
    wt2 *= 28.3495f; //convert to oz
    if(wt2 < 1000){ //catches conversions less than 1 kg
        wt1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 kg
        wt1 = wt2/1000.0f;
        wt2 = (wt1 - static_cast<int>(wt1))*1000.0f;
        wt1 = static_cast<int>(wt1);
    }
}
void EngOutW(float &wt1, float &wt2){
    cout << "You entered " << wt1 << "kg " << wt2 << "g\n";
    MetEngW(wt1,wt2); //Perform the conversion
    cout << "English conversion: " << wt1 << "lbs " << wt2 << "oz\n";
}
//Problem 11 functions
int Prob11(){
    char ctype; //Declare variable used outside the loop
    do{
        float wt1, wt2; //Declare variables used inside loop
        W_In(wt1, wt2, ctype);
        W_Out(wt1, wt2, ctype);
        cout << "Again(Y/N)? ";
        cin >> ctype; //reuse variable ctype for exit loop input
    }while(ctype == 'Y' || ctype =='y');
    //Execution ends HERE
    return 0;
}
void W_In(float &wt1, float &wt2, char &ctype){
    cout << "Which conversion would you like to perform?\n";
    cout << "1. Metric to English\n";
    cout << "2. English to Metric\n";
    cout << "Please enter 1 or 2: "; //Prompts user for input
    cin >> ctype; //takes conversion type
    while(ctype != '1' && ctype != '2'){ //Input validation
        cout << "Invalid selection. Try again.";
        cout << "Which conversion would you like to perform?\n";
        cout << "1. Metric to English\n";
        cout << "2. English to Metric\n";
        cout << "Please enter 1 or 2: ";
        cin >> ctype;
    }
    cout << "Now enter the values to be converted in ";
    (ctype == '1') ? cout << "kg and grams " : cout << "lbs and oz ";
    cout << "separated by a space: ";
    cin >> wt1 >> wt2; //takes weights to be converted
    while(wt1 < 0 && wt2 < 0){ //Input validation
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Now enter the values to be converted in ";
        (ctype == '1') ? cout << "kg and grams " : cout << "lbs and oz ";
        cout << "separated by a space: ";
        cin >> wt1 >> wt2;
    }
}
void W_Conv(float &wt1, float &wt2, char &ctype){
    float factor, conv, chk; //factor for source units, conversion factor, and destination units
    switch(ctype){ //assigns factor, conversion factor, and check - weight units
        case '1': factor = 1000.0f; conv = 3.5274e-2f; chk = 16.0f; break; //Metric to English
        case '2': factor = 16.0f; conv = 28.3495f; chk = 1000.0f; break; //English to Metric
        default: cout << "Invalid conversion choice.\n"; break;
    }
    wt2 += wt1*factor; //unify units under 1 common unit
    wt2 *= conv; //convert units
    if(wt2 < chk){ //catches conversions less than 1 base unit
        wt1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 base unit
        wt1 = wt2/chk;
        wt2 = (wt1 - static_cast<int>(wt1))*chk;
        wt1 = static_cast<int>(wt1);
    }
}
void W_Out(float &wt1, float &wt2, char &ctype){
    cout << "You entered ";
    switch(ctype){
        case '1':{
            cout << wt1 << "kg " << wt2 << "g.\n";
            W_Conv(wt1, wt2, ctype); //Performs the conversion
            cout << "English equivalent: " << wt1 << "lbs " << wt2 << "oz.\n";
            break;
        }
        case '2':{
            cout << wt1 << "lbs " << wt2 << "oz.\n";
            W_Conv(wt1, wt2, ctype); //Performs the conversion
            cout << "Metric equivalent: " << wt1 << "kg " << wt2 << "g.\n";
            break;
        }
    }
}
//Problem 12 functions
int Prob12(){
    char ctype, utype; //Declare variables used outside the loop
    do{
        float val1, val2; //Declare variables
        utype = Input(val1, val2, ctype);
        Output(val1, val2, ctype, utype);
        cout << "Again(Y/N)? ";
        cin >> utype; //reuse variable utype for exit loop input
    }while(utype == 'Y' || utype =='y');
    //Execution ends HERE
    return 0;
}
char Input(float &val1, float &val2, char &ctype){
    char utype;
    cout << "Which conversion would you like to perform?\n";
    cout << "1. Metric to English\n";
    cout << "2. English to Metric\n";
    cout << "Please enter 1 or 2: "; //Prompt user input
    cin >> ctype; //takes conversion type
    while(ctype != '1' && ctype != '2'){ //Input validation
        cout << "Invalid selection. Try again.";
        cout << "Which conversion would you like to perform?\n";
        cout << "1. Metric to English\n";
        cout << "2. English to Metric\n";
        cout << "Please enter 1 or 2: ";
        cin >> ctype; //takes conversion type
    }
    cout << "What units of measure?\n";
    cout << "L - Length units\n";
    cout << "W - Weight units\n";
    cout << "Please enter L or W: "; //Prompt user input
    cin >> utype; //takes unit type
    while(utype != 'L' && utype != 'W' && utype != 'l' && utype != 'w'){ //Input validation
        cout << "Invalid selection. Try again.";
        cout << "What units of measure?\n";
        cout << "L - Length units\n";
        cout << "W - Weight units\n";
        cout << "Please enter L or W: ";
        cin >> utype;
    }
    cout << "Now enter the values to be converted in ";
    if(utype == 'L' || utype == 'l') (ctype == '1') ? cout << "m and cm " : cout << "ft and inches ";
    else (ctype == '1') ? cout << "kg and g " : cout << "lbs and oz ";
    cout << "separated by a space: ";
    cin >> val1 >> val2; //takes units to be converted
    while(val1 < 0 || val2 < 0){ //Input validation
        cout << "Invalid input! Positive values only! Try again.\n";
        cout << "Now enter the values to be converted in ";
        (ctype == '1') ? cout << "m and cm " : cout << "ft and inches ";
        cout << "separated by a space: ";
        cin >> val1 >> val2;
    }
    return utype;
}
void Convert(float &val1, float &val2, char &ctype, char utype){
    float factor, conv, chk; //factor for source units, conversion factor, and destination units
    if(utype == 'L' || utype == 'l'){ //assigns factor, conversion factor, and check - length units
        switch(ctype){
            case '1': factor = 100.0f; conv = 3.93701e-1f; chk = 12.0f; break; //Metric to English
            case '2': factor = 12.0f; conv = 2.54f; chk = 100.0f; break; //English to Metric
            default: cout << "Invalid conversion choice.\n"; break;
        }
    }
    else{ //assigns factor, conversion factor, and check - weight units
        switch(ctype){
            case '1': factor = 1000.0f; conv = 3.5274e-2f; chk = 16.0f; break; //Metric to english
            case '2': factor = 16.0f; conv = 28.3495f; chk = 1000.0f; break; //English to Metric
            default: cout << "Invalid conversion choice.\n"; break;
        }
    }
    val2 += val1*factor; //unify units under 1 common unit
    val2 *= conv; //convert units
    if(val2 < chk){ //catches conversions less than 1 base unit
        val1 = 0;
    }
    else{ //catches conversions greater than or equal to 1 base unit
        val1 = val2/chk;
        val2 = (val1 - static_cast<int>(val1))*chk;
        val1 = static_cast<int>(val1);
    }
}
void Output(float &val1, float &val2, char &ctype, char utype){
    cout << "You entered ";
    if(utype == 'L' || utype == 'l'){ //Output length units
        switch(ctype){
            case '1':{
                cout << val1 << "m " << val2 << "cm.\n";
                Convert(val1, val2, ctype, utype); //Perform the conversion
                cout << "English equivalent: " << val1 << "ft " << val2 << "inches.\n";
                break;
            }
            case '2':{
                cout << val1 << "ft " << val2 << " inches.\n";
                Convert(val1, val2, ctype, utype); //Perform the conversion
                cout << "Metric equivalent: " << val1 << "m " << val2 << "cm.\n";
                break;
            }
        }
    }
    else{ //Output weight units
        switch(ctype){
            case '1':{
                cout << val1 << "kg " << val2 << "g.\n";
                Convert(val1, val2, ctype, utype); //Perform the conversion
                cout << "English equivalent: " << val1 << "lbs " << val2 << "oz.\n";
                break;
            }
            case '2':{
                cout << val1 << "lbs " << val2 << " oz.\n";
                Convert(val1, val2, ctype, utype); //Perform the conversion
                cout << "Metric equivalent: " << val1 << "kg " << val2 << "g.\n";
                break;
            }
        }
    }
}
//Problem 15 functions
int Prob15(){
    srand(time(0)); //Seed rand()
    //Declare variables
    char Winner, choice;
    do{
        int a_Wins = 0, b_Wins = 0, c_Wins = 0, n_Runs = 10000;
        bool a_Alive = true, b_Alive = true, c_Alive = true;
        float a_Acc = 0.33f, b_Acc = 0.5f, c_Acc = 1.0f;
        while(choice != '1' && choice != '2'){
            cout << "Choose a condition:\n"; //Prompt for input
            cout << "1. Obvious strategy\n";
            cout << "2. Counterintuitive strategy\n";
            cin >> choice; //Takes the choice
            if(choice != '1' && choice != '2') cout << "Invalid choice! Try again.\n";
        }
        for(int Ctr = 1; Ctr <= n_Runs; Ctr++){
            Winner = '\0';
            Winner = StartDuel(a_Alive, b_Alive, c_Alive, a_Acc, b_Acc, c_Acc, choice);
            switch(Winner){ //increments proper win column
                case 'A': a_Wins++; break;
                case 'B': b_Wins++; break;
                case 'C': c_Wins++; break;
                default:;
            }
        }
        cout << "win/loss percentage:\n"; //Outputs results
        cout << setw(4) << "Aaron  |  Bob  |  Charlie\n";
        cout << setw(4) << static_cast<float>(a_Wins)/static_cast<float>(n_Runs)*100.0f << "%"
             << setw(9) << static_cast<float>(b_Wins)/static_cast<float>(n_Runs)*100.0f << "%"
             << setw(7) << static_cast<float>(c_Wins)/static_cast<float>(n_Runs)*100.0f << "%" << endl;
        cout << "Again(Y/N)? ";
        cin >> choice;
    }while(choice == 'Y' || choice == 'y');
    //Execution ends HERE
    return 0;
}
bool Shoot(bool &t_Alive, float &s_Acc){
    float shot;
    shot = (static_cast<float>(rand())/static_cast<float>(RAND_MAX))*1.0f; //random float simulating the shot
    cout << shot << endl;
    if(s_Acc > shot){ //Checks shot against accuracy
        t_Alive = false;
        cout << "Target eliminated.\n";
        return t_Alive;
    }
    cout << "Target survived.\n";
    t_Alive = true;
    return t_Alive;
}
char StartDuel(bool a_Alive, bool b_Alive, bool c_Alive, float a_Acc, float b_Acc, float c_Acc, char choice){
    bool f_Shot;
    if(choice == '2') f_Shot = true;
    else f_Shot = false;
    char Winner = '\0';
    do{
        while(a_Alive){
            if(f_Shot == true){
                a_Acc = 0.0f;
                f_Shot = false;
            }
            else a_Acc = 0.33f;
            if(c_Alive){
                cout << "Aaron shoots Charlie. ";
                Shoot(c_Alive, a_Acc);
                break;
            }
            else if(b_Alive){
                cout << "Aaron shoots Bob. ";
                Shoot(b_Alive, a_Acc);
                break;
            }
            else{
                cout << "Aaron wins!\n";
                Winner = 'A';
                break;
            }
        }
        while(b_Alive){
            if(c_Alive){
                cout << "Bob shoots Charlie. ";
                Shoot(c_Alive, b_Acc);
                break;
            }
            else if(a_Alive){
                cout << "Bob shoots Aaron. ";
                Shoot(a_Alive, b_Acc);
                break;
            }
            else{
                cout << "Bob wins!\n";
                Winner = 'B';
                break;
            }
        }
        while(c_Alive){
            if(b_Alive){
                cout << "Charlie shoots Bob. ";
                Shoot(b_Alive, c_Acc);
                break;
            }
            else if(a_Alive){
                cout << "Charlie shoots Aaron. ";
                Shoot(a_Alive, c_Acc);
                break;
            }
            else{
                cout << "Charlie wins!\n";
                Winner = 'C';
                break;
            }
        }
    }while(Winner == '\0');
    return Winner;
}
//Problem 16 and Problem 17 functions
int Prob16(){
    //Declare variables
    bool isValid = false;
    int month, day, year, WkDay;
    //input values
    GetInput(month, day, year);
    cout << "isLeap(year) = " << isLeap(year) << endl; //stub to see if isLeap() is returning the correct value
    if(year > -1){
        if(month > 0 && month < 13){
            switch(month){
                case 1: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 2: {
                    if(isLeap(year)){
                        (day > 0 && day < 30) ? isValid = true : isValid = false; break;
                    }
                    else (day > 0 && day < 29) ? isValid = true : isValid = false; break;
                }
                case 3: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 4: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 5: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 6: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 7: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 8: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 9: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 10: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 11: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 12: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                default: isValid = false;
            }
        }
        else isValid = false;
    }
    else isValid = false;
    cout << "v_Cent = " << v_Cent(year) << endl; //stub to test if v_Cent() returns the correct value
    cout << "v_Year = " << v_Year(year) << endl; //stub to test if v_Year() returns the correct value
    cout << "v_Month = " << v_Month(month, year) << endl; //stub to test if v_Month() returns the correct value
    if(isValid)  WkDay = (v_Cent(year) + v_Year(year) + v_Month(month, year) + day) % 7;
    else WkDay = -1;
    cout << "Day of the Week = " << WkDay << endl;
    //Execution ends HERE
    return 0;
}
int Prob17(){
    //Declare variables
    bool isValid = false;
    int month, day, year;
    //input values
    GetInput(month, day, year);
    cout << "isLeap(year) = " << isLeap(year) << endl; //stub to see if isLeap() is returning the correct value
    cout << "Day of the Week = " << DayOfWk(month, day, year) << endl;
    //Execution ends HERE
    return 0;
}
bool isLeap(int year){
    if(((year % 400) == 0) || (((year % 4) == 0)&&((year % 100) != 0))) return true;
    else return false;
}
int v_Cent(int year){
    int c_yr = year /100;
    c_yr = c_yr % 4;
    c_yr = (3 - c_yr) * 2;
    return c_yr;
}
int v_Year(int year){
    int yr;
    year -= ((year /1000) * 1000);
    if(year > 99){
        year -= ((year /100) * 100);
    }
    yr = year /4;
    yr += year;
    return yr;
}
int v_Month(int month, int year){
    switch(month){
        case 1:{
            if(isLeap(year)) return 6; 
            else return 0;
        }
        case 2:{
            if(isLeap(year)) return 2;
            else return 3;
        }
        case 3: return 3;
        case 4: return 6;
        case 5: return 1;
        case 6: return 4;
        case 7: return 6;
        case 8: return 2;
        case 9: return 5;
        case 10: return 0;
        case 11: return 3;
        case 12: return 5;
        default: return -1;
    }
}
int DayOfWk(int month, int day, int year){
    bool isValid = false;
    if(year > -1){
        if(month > 0 && month < 13){
            switch(month){
                case 1: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 2: {
                    if(isLeap(year)){
                        (day > 0 && day < 30) ? isValid = true : isValid = false; break;
                    }
                    else (day > 0 && day < 29) ? isValid = true : isValid = false; break;
                }
                case 3: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 4: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 5: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 6: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 7: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 8: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 9: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 10: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                case 11: (day > 0 && day < 31) ? isValid = true : isValid = false; break;
                case 12: (day > 0 && day < 32) ? isValid = true : isValid = false; break;
                default: isValid = false;
            }
        }
        else isValid = false;
    }
    else isValid = false;
    cout << "v_Cent = " << v_Cent(year) << endl; //stub to test if v_Cent() returns the correct value
    cout << "v_Year = " << v_Year(year) << endl; //stub to test if v_Year() returns the correct value
    cout << "v_Month = " << v_Month(month, year) << endl; //stub to test if v_Month() returns the correct value
    if(isValid) return (v_Cent(year) + v_Year(year) + v_Month(month, year) + day) % 7;
    else return -1;
}
void GetInput(int &month, int &day, int &year){
    char slash;
    cout << "Enter the date in (MM/DD/YYYY) format: ";
    cin >> month >> setw(2) >> slash >> day >> setw(2) >> slash >> year;
}