#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    
    // Swap elements from start and end moving towards the middle
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nOriginal ";
    printArray(arr, n);

    reverseArray(arr, n);

    cout << "Reversed ";
    printArray(arr, n);

    return 0;
}