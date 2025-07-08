#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int even[8] = {23, 34, 11, 28, 31, 33, 45, 10};

    swapAlternate(even, 8);
    printArray(even, 8);

    return 0;
}





