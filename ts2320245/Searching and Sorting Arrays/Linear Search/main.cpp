//Linear Search

#include <cstdlib>
#include <iostream>
using namespace std;
int searchList(int [], int , int );
int main(int argc, char** argv) {

    
    const int Size = 10;
    int array[Size] = {12, 25,67,98,45,34,2,65,77,89};
    cout << searchList(array, 10, 77);
    return 0;
}
int searchList(int array[], int numElems, int value){
    int index =0;
    int position = -1;
    bool found = false;
    while (index < numElems && !found){
        if (array[index] == value){
            found = true;
            position = index;
        }
        index ++;
    }
    return position;
}
