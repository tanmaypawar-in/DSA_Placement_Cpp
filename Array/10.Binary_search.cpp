// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;            // Start index
    int end = size - 1;       // End index

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if key is found at mid
        if (arr[mid] == key) {
            return mid;  // Return index
        }
        // If key is greater, ignore left half
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            end = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {2, 4, 6, 10, 14, 18, 21};  // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}

