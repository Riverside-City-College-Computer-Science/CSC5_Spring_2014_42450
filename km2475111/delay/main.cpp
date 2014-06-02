/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 2, 2014, 8:13 AM
 */

#include <iostream>
#include <windows.h> // Sleep(milliseconds)
using namespace std;

int main() 
{
    cout << "countdown:\n";
  for (int i=10; i>0; --i) {
      cout << i << '\n';
      Sleep(1000);
  }cout << "Lift off!\n";

  return 0;
}

