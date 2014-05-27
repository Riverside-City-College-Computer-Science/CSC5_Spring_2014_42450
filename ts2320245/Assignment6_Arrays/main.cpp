
 /* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on May 8, 2014, 12:21 AM
      * Assignment6_Arrays
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <fstream>//File input/output
#include <ctime>//Time for random and program
#include <iomanip>//Formatting
#include <cmath>//Math functions
using namespace std;

//Global Constants
float kilo = 2.2046;// one kilo is always equal to 2.2046 pounds
float gram = 453.592;// one gram is always equal to 453.592 pounds

float pound = 2.2046;// one pound is always equal to 2.2046 kilograms 
float ounce = 35.274;// one ounce is always equal to 35.274 kilograms

//Function Prototypes For Case 1
int countPerfect (int);


//Function Prototypes For Case 5
void inputt();
float calc(float);
float calcCnt(float);

//Function Prototypes For Case 6
void innput();
float clckilos(float);
float clcgrams(float);

//Function Prototypes For Case 7
void input();
float calckilos(float);
float calcgrams(float);


//Function Prototypes For Case 10
void filAray(int [],int);
void prntAry(int [],int,int);
void prime(int [],int);
void prntPrm(int [],int,int);

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1.Gaddis_7thEdBook_Chap8_Prob1"<<endl;
        cout<<"2.Gaddis_7thEdBook_Chap8_Prob2"<<endl;
        cout<<"3.Gaddis_7thEdBook_Chap8_Prob3"<<endl;
        cout<<"4.Gaddis_7thEdBook_Chap8_Prob6"<<endl;
        cout<<"5.Savitch_8thEdBook_Chap5_Prob6"<<endl;
        cout<<"6.Savitch_8thEdBook_Chap5_Prob9"<<endl;
        cout<<"7.Savitch_8thEdBook_Chap5_Prob10"<<endl;
        cout<<"8.Deitel_3rdEdBook_Chp4_Prob4.29"<<endl;
        cout<<"9.Savitch_8thEdBook_Chap5_Prob13"<<endl;
        cout<<"10.Deitel_3rdEdBook_Chp4_Prob4.15"<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{ 
                            /* 
                             * File:   main.cpp
                             * Author: saldana
                             *Problem 1: Write a modular program that accepts at least 10 integer test scores from the user and stores 
                             *           them in a n array. Then main shuld display how many perfet scores were entered (i.e., scores of 100),
                             *           using a value-returning "countPerfect function to help it. Input Validation : Do not accept scores less 
                             *           than 0 or greater than 100.
                             * Created on May 18, 2014, 12:22 AM
                             * Gaddis_7thEdBook_Chap8_Prob1
                             */
                            //Declaration of variables and arrays
                            const int Size = 10;
                            int tstScrs[10],prfscrs=0;
                            //Tells user about the program
                            cout << "\nThis program accepts ten integers test scores from the user and then displays how many perfect test scores there were.\n";
                            cout << "NOTE: A Perfect test score is 100.\n";
                            cout << "\nEnter test score(TestScore Range = [0,100]):\n";
                            //this for repetition structure fill asks user to fill in the array. 
                            for (int count = 0; count< Size; count ++){
                                cout << "\nGrade #" << (count+1) << ":";
                                cin >> tstScrs[count];
                                //this while repetition structure checks to see if the range is [0,100]
                                //if it is not in the range, it warns the user 
                                while (tstScrs[count]<0 || tstScrs[count]>100){
                                    cout << "\nPlease enter a test score in the range 0 to 100.\n";
                                    cout << "\nGrade #" << (count+1) << ":";
                                    cin >> tstScrs[count];
                                }
                                cout << endl;      
                            }
                            int i;// variable
                            // this for structure checks how many perfect scores the user inputed
                            //also calls the function that checks for perfect scores of 100
                            for (int i=0; i<10; i++){
                                prfscrs += countPerfect(tstScrs[i]);

                            }
                            cout << "\nThere were "<< prfscrs<< " perfect test scores.\n";

                                                cout << "\n\n\n\n";
               
                        break;
            }
            case 2:{  
                             
                                            /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 2: Write a program that displays the roman numeral equivalent of any decimal number
                                          between 1 and 20 that the user enters. The roman numerals should be stored in an array of
                                          strings and the decimal number that the user enters should be used to locate the array element 
                             *            holding the roman numeral equivalent. The program should have a loop that allows the user to 
                             *            continue entering numbers until and end Sentinel of 0 is entered.
                             *            (do not accept anything less than 0 or greater than 20)
                             * 
                             *
                             * Created on May 18, 2014, 1:32 AM
                             * Gaddis_7thEdBook_Chap8_Prob2
                             *///Declaration of variables
                                const int Size=21 ;
                                      int  num = 1 ;
                                      //array of roman numerals
                                string rmnNum[Size+1]= {"","I" ,"II", "III", "IV","V",
                                                "VI", "VII", "VIII", "IX","X",
                                                "XI","XII","XIII","XIV","XV",
                                                "XVI","XVII","XVIII","XIX","XX"};
                                //tells user about the program
                                cout << "\nThis program asks the user to type in an integer between 1 and 20. The program takes that integer and then converts it into a Roman Numeral ";
                                cout << "\nEnter an integer that is between 1 and 20 so that the computer could tell you what that numbers  Roman Numeral is.\n";
                                 //this while construct allows user to decide when he or she wants to end program
                                while (num != 0){
                                 // tells user to enter first number
                                       cout<< "\nEnter an integer that is between 1 and 20(Enter 0 to end):";
                                      cin >> num ;
                                // checks to see if the user entered a number between 1 and 20
                                 while (num <0 || num >20){
                                      cout << "\nPlease enter an integer whose range is [1,20].\n";
                                      cin >> num ;
                                  }
                                      // displays the results
                                cout<< num << " is " << rmnNum[num] << " in Roman Numerals.\n" << endl;
                               }

                                                    //Exit stage right
                                                    cout<<"\n\n\n\n";
                break;
            }
            case 3:{
                               
                             /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 3:Write a program that lets a maker of chips and salsa keep track of their sales for ï¬�ve
                                        different types of salsa they produce: mild, medium, sweet, hot, and zesty. It should use
                                        two parallel ï¬�ve-element arrays: an array of strings that holds the ï¬�ve salsa names and
                                        an array of integers that holds the number of jars sold during the past month for each
                                        salsa type. The salsa names should be stored using an initialization list at the time the
                                        name array is created. The program should prompt the user to enter the number of jars
                                        sold for each type. Once this sales data has been entered, the program should produce
                                        a report that displays sales for each salsa type, total sales, and the names of the highest
                                        selling and lowest selling products.
                                        Input Validation: Do not accept negative values for number of jars sold
                             * 
                             *
                             * Created on May 18, 2014, 9:55 AM
                             * Gaddis_7thEdBook_Chap8_Prob3
                             */
                                            //Declaration of Variables
                                const int Size=5;
                                // Parallel arrays
                                string salsa[Size]= {"Mild  ", "Medium", "Sweet ", "Hot   ", "Zesty "};
                                int amnt[Size], numOfJars = 0;
                                //Tells user about the program
                                cout << "\n****This program lets  makers of chips and salsa keep track of their sales for ";
                                cout << "five different types of salsa they produce: mild, medium, sweet, and zesty.\n";
                                cout << "It asks the salsa makers to input the number of sales for each salsa, and ";
                                cout<<  "it produces a report that illustrates the sales for each salsa type and the total "
                                    << "sales.****\n ";
                                // this for construct allows user to enter the number of jars sold for each salsa
                                for (int index = 0; index<Size; index ++){
                                    cout << "\nHow many jars of the " << salsa[index] << "salsa did you sell?\n";
                                    cin >> amnt[index];// fills in array amnt []
                                    // checks to see if user entered a negative number
                                    while (amnt[index]<0){
                                        cout << "\nPLEASE ENTER A NON NEGATIVE NUMBER OF SALES-ONLY.";
                                        cout << "\nHow many jars of the " << salsa[index] << "salsa did you sell?\n";
                                        cin >> amnt[index];
                                    }
                                    numOfJars += amnt[index];// counts the total number of jars
                                }
                                //displays table
                                cout << "\n\nSalsa"<< setw(11) << "#Sold" << endl;
                                cout << "----------------\n";
                                // table
                                for (int count =0 ; count < Size; count ++){
                                cout << salsa[count] << setw(7) << amnt[count] << endl;
                                }
                                // displays total jar sold
                                cout << "\nYou sold a total of " << numOfJars << " jars.\n";

                                                          cout <<"\n\n\n\n";


                break;
            }
        case 4:{        

                             /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 6:Write a program that simulates a lottery. The program should have an array of 5 integers
                                        named "winningDigits", with a randomly generated number in the range of 0 through 9
                                        for each element in the array. The program should ask the user to enter 5 digits and should
                                        store them in a second integer array named "player". The program must compare corresponding elements in 
                                        the two arrrays and count how many digits match. For example, the following shows the "winning Digits 
                                        array and the "Player" array with sample numbers stored in each. There are two matching digits, elements 2 and 4.
                             * Created on May 18, 2014, 12:08 PM
                             * Gaddis_7thEdBook_Chap8_Prob6
                             */
                                         //Set Random Number Seed
                                srand(time(0));
                                //Declaration of Variables
                                const int Size= 5;
                                int wngDgts[Size];
                                //assign all elements of array wngDgts a random number
                                 wngDgts[0] = rand()%10 ;
                                 wngDgts[1] = rand()%10 ;
                                 wngDgts[2] = rand()%10 ;
                                 wngDgts[3] = rand()%10 ;
                                 wngDgts[4] = rand()%10 ;
                                 // Declaration of more variables
                                 int player[Size], cnt = 0, lse = 0;
                                 int count[Size]={1,2,3,4,5};
                                 //Tells user about the program
                                 cout << "This program is a lottery simulation.\n"; 
                                 // this for construct allows user to enter 6 digits
                                  for (int i=0; i<Size; i++){
                                       cout << "Enter Lottery Digit #" << count[i] << ":";
                                       cin >> player[i];
                                  //this while construct checks the range [0,9]
                                  while (player[i]>9 || player[i]<0){
                                        cout << "\n**PLEASE ENTER A SINGLE-DIGIT, POSITIVE NUMBER-ONLY**\n ";
                                        cout << "Enter Lottery Digit #" << count[i] << ":";
                                        cin >> player[i];
                                  }

                                  cout << endl;
                               } 
                                // results
                               cout << "\nWinning Digits: " << wngDgts[0]<< " "<< wngDgts[1]<< " "<< wngDgts[2]<< " "<< wngDgts[3]<< " "<< wngDgts[4]<< " " << endl;
                               cout << "Your Digits:    " << player[0] <<" "<< player[1] <<" "<< player[2] <<" "<< player[3] <<" "<< player[4 ] <<" " << endl;
                              // checks to see if the users digits match the winning digits
                               for (int x = 0; x < Size ; x++ ){
                                   if (wngDgts[x]==player[x]){
                                       cnt++; 
                                   }
                                   else 
                                       lse++;
                               }
                                // tells the user if he/she won or lost
                               if( cnt > 0){
                                 cout << "\nCongratulations! You have " << cnt << " matching numbers!\n";
                               }
                               if (lse == 5)
                                   cout << "\nYou have no matching digits. You loose.\n";

                                                            cout <<"\n\n\n\n ";
        
                break;
            }
            case 5:{ 

                                            /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 6 :Write a  program that reads in a length in feet and inches and outputs the equivalent
                             *            length in meters and centimeters. Use at least three functions: one for input, one or more
                             *            for calculating, and one for output. Include a loop that lets the user repeat this computation for
                             *            new input values until the user says he or she wants to end the program. There are 0.3048 meters in a foot,
                             *            100 centimeters in a meter, and 12 inches in a foot.  
                             *
                             * Created on May 19, 2014, 9:17 AM
                             * Savitch_8thEdBook_Chap5_Prob6
                             */
                                            //Declaration of variables
                                const int Size = 1;
                                //Array declaration
                                float inpt[Size];
                                // tells user what program is about 
                                cout << "\n\t\t****This program reads in a length in feet and inches and outputs the equivalent length in meters and centimeters****\n";
                                // this function tells the user what to do. 
                                inputt();
                                cin >> inpt[0]; // the input becomes the element zero of array inpt
                                cout << endl;
                                // This while structure allows user to repeat program as much as he, she wants
                                while (inpt[0] != 0){
                                    // calls two functions 
                                      cout << inpt[0] << " feet is " << calc(inpt[0]) << " meters ";
                                      cout << "or " << calcCnt(inpt[0]) << " centimeters.\n";
                                      inputt();
                                      cin >> inpt[0];
                                      cout << endl;
                                }

                                                        cout << "\n\n\n\n";

                break;
            }
            case 6:{
                             
                             /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 9 : Write a program that reads in a weight in pounds and ounces and outputs the equivalent weight
                             *             in kilograms and grams. Use atleast three functions: one for input, one or more for calculating ,
                             *             and one for output. Make a loop. 
                             *
                             * Created on May 19, 2014, 10:37 AM
                             * Savitch_8thEdBook_Chap5_Prob9
                             */
                                             cout << "\n\t****This program reads in your weight in pounds and outputs your equivalent weight in in kilograms.****\n";
                                const int Size=1;
                                float wgt[Size];

                                innput();
                                cin >> wgt[0];
                                cout << endl;
                                while (wgt[0] != 0 ){
                                    cout << "\nYou weight " << wgt[0] << " pounds, which means you weight " << clckilos(wgt[0]) << " kilograms or ";
                                    cout << clcgrams(wgt[0]) << " grams.\n";
                                    innput ();
                                    cin >> wgt[0];
                                    cout << endl;

                                }
                                            cout <<"\n\n\n\n";

                break;
            }
            case 7:{              

                             /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 10 : Write a program like that of the previous exercise(Exercise 9) that converts from kilograms 
                             *              and grams into pounds and ounces. Use functions for subtasks.  
                             *
                             * Created on May 19, 2014, 10:37 AM
                             * Savitch_8thEdBook_Chap5_Prob10
                             */
                                             //tells user about the program
                                cout << "\n\t****This program reads in your weight in pounds and outputs your equivalent weight in in kilograms.****\n";
                                // Declaration of variables
                                const int Size=1;
                                //ARRAY 
                                float wgt[Size];
                               // calls function that will display the output
                                input();
                                // gets the users input and assigns it to the element 0 in array wgt
                                cin >> wgt[0];
                                cout << endl;
                                // This while structure allows user to use program as long as he/she wants
                                while (wgt[0] != 0 ){
                                    // tell user the results
                                    cout << "\nYou weight " << wgt[0] << " kilograms, which means you weight " << calckilos(wgt[0]) << " pounds or ";
                                    cout << calcgrams(wgt[0]) << " ounces.\n";
                                    input ();
                                    cin >> wgt[0];
                                    cout << endl;

                                }
                           //Exit stage right.
                              cout <<"\n\n\n\n";
                break;
            }
            case 8:{
                        
                                         //Declare variables
                            cout << "\n\t****THE SIEVE ERATOSTHENES****\n";
                            srand(static_cast<unsigned int>(time(0)));
                            const int SIZE=1000;
                            int array[SIZE];
                            //Fill the array with 2 digit random numbers
                            filAray(array,SIZE);
                            //Print the array
                            prntAry(array,SIZE,5);
                            //Sort
                            prime(array,SIZE);
                            //Print the array
                            prntPrm(array,SIZE,5);


                                                    cout <<"\n\n\n\n";
                break;
            }
            case 9:{
                             /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas 
                             * Problem 13:  The area of an arbitrary triangle can be computed using the formula
                             *                      area = sqrt(s(s-a)(s-b)(s-c)) 
                             *                      , where a, b, and c are the lengths of the sides, and s is the semiperimeter
                             *                      s = (a+b+c)/2
                             *              write a void function that computes the area and perimeter( NOT SEMIPERIMETER) of a triangle
                             *              based on the lenght of the sides. The function should use five parameters-three value parameters 
                             *              that provide the lengths of the edges and two reference parameters that store the computed area
                             *              and perimeter. Make your function robust. Note: not all inputs are valid. act accordingly
                             *   
                             *  
                             * Created on May 19, 2014, 11:28 AM
                             * Savitch_8thEdBook_Chap5_Prob13
                             */
                                               cout << "\n\t****This program calculates the area and perimeter of a triangle.****\n";

                                const unsigned Size = 3;
                                float sides[Size];
                                float s, area=0, a, b, c, prmtr;

                                cout << "\nEnter the three sides of any valid triangle so that the computer can calculate the area and perimeter of that triangle.\n";

                                cout << "\n\tSide a=";    cin >> sides[0];  
                                cout << "\n\tSide b=";    cin >> sides[1];    
                                cout << "\n\tSide c=";    cin >> sides[2];    
                                cout << "\n\n";
                                cout << "Thank You.\n";
                                s = (sides[0]+sides[1]+sides[2])/2;
                                a= sides[0];
                                b= sides[1];
                                c= sides[2];
                                   area = sqrt(s*(s-a)*(s-b)*(s-c));
                                   prmtr = a +b+c;
                                 cout << "The area is " << area;
                                cout << "\nThe perimeter is " << prmtr;



                
                
                
                
                                                                 cout <<"\n\n\n\n";
                                        break;
            }
             case 10:{    
                             /* 
                             * File:   main.cpp
                             * Author: saldana, thomas
                             * Problem 4.15:Use a single-indxed array to solve the following problem. Read in 20 numbers, 
                             *           each of which is between 10 and 100, inclusive. As each number is read, print it only
                             *           if it is not a repeats of a number already read. Provide for the “worst case” in which
                                         all 20 numbers are different. Use the smallest possible array to solve this problem.
                             * 
                             *
                             * Created on May 19, 2014, 9:52 PM
                             * Deitel_3rdEdBook_Chp4_Prob4.15
                             */        

                                             //Declaration of varibles
                                const int Size = 10;
                                //array userNum
                                float usrNum[Size] ={0};
                                int indx = 0, val, repeats;
                                //tells the user about the program
                                cout << "\n\t****This program asks you to input ten integers between 10 and 100, deletes any repeating numbers, and outputs the results****\n";
                                cout << "\nPlease enter 10 integers between 10 and 100:\n"; // prompt
                                // this for construct allows user to enter 10 integers
                                for (int i =0; i <Size; i++){
                                    repeats = 0;// keeps count of the repeating numbers
                                    cin >> val;
                                    while (val<10|| val>100){// checks the range [10,100]
                                        cout << "\n***Please enter an integer between 10 and 100-ONLY**\n";
                                        cin >> val; // input
                                    }
                                    // find the repeating numbers
                                    for ( int j =0; j<indx; j++)
                                        if (val == usrNum[j]){
                                            repeats =1;
                                            break;
                                        }
                                    if (!repeats)
                                        usrNum[indx++] = val;
                                }
                                // cout results
                                cout << "\nHere are the number with out any repeats.\n";
                                for ( int x=0; usrNum[x]!=0; x++){
                                    cout << usrNum[x];
                                    cout.width(4);}
                                    cout <<endl;
                 
                            //Exit function main
                                                    cout << "\n\n\n\n";
                        //Exit Stage Right.
                break;
            }
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit the program
    return 0;
}

//Function Definitions For Case 1
int countPerfect(int num){
    int prfscrs=0;//Declaration of Varialble
    if (num==100){//checks to see if the array element is 100(a perfect score)
        //adds 1 to perfect score
        prfscrs++;
        //returns count
    return prfscrs;
    }
    else 
        // the function return nothing if no grades are perfect.
        return 0;
    
}


//Function Definitions For Case 5
void inputt(){
    // tells user what to do.
    cout << "\nEnter a length in feet and inches(i.e. Enter 12.3 for 12 feet, 3 inches)**Enter 0 to end Program**: ";
}

float calc(float num){
    // converts feets to meters
    num = num*12;
    num *= .0254;
    return num;
}

float calcCnt(float cent){
    // converts feet to centimeters
     cent*= 30.48;
     return cent;
}

//Function Definitions For Case 6
void innput(){
    cout << "\nEnter how many pounds you weight **ENTER 0 TO END PROGRAM**:";
}
float clckilos(float num){
    num/=kilo;
    return num;
    
    
}
float clcgrams(float i){
    i *= gram;
    return i;
    
}

//Function Definitions For Case 7
void input(){
    // tells user to input his or her weight
    cout << "\nHow many Kilograms do you weight ?**ENTER 0 TO END PROGRAM**:";
}
float calckilos(float num){
    // converts kilograms into pounds
    num*=2.2046;
    return num;// returns pounds
}
float calcgrams(float i){
    // converts kilograms into ounces
    i *= ounce;
    return i;// returns ounces
    
}



//Function Definitions For Case 10
void prime(int a[],int n){
    //Examine each position in the list
    //up to its square root
    for(int pos=2;pos<sqrt(n);pos++){
      //Increment by the factor to test
      //to test for prime numbers
      for(int i=2*pos;i<n;i+=pos){
        //Zero out those multiplicative factors
          a[i]=0;
      }//end for i
    }//end for pos
}

void prntPrm(int a[],int n,int perLine){
    //Create counter and header
    int cnt=0;
    cout<<endl;
    for(int i=2;i<n;i++){
        if(a[i]!=0){
            cout<<setw(8)<<a[i];
            if(cnt++%perLine==(perLine-1))cout<<endl;
        }
    }
    cout<<endl;
   
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Fill an indexed arraay
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=i;
    }
}
