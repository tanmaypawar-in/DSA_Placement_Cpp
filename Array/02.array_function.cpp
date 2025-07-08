// Using Function in an array

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    cout<< "prining an array" << endl;
    //print the array
    for(int i=0; i<n; i++) {
       cout << arr[i] << " "; 

    }
    cout<< "prinintg done" <<endl;
}

int main() {
    //declare
    int number[5];

    printArray(number, 5);

    return 0;
}