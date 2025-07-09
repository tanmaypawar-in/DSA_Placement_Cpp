#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort Function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    // Outer loop: number of passes
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        // Inner loop: compare and swap adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swaps happened in this pass, array is already sorted
        if (!swapped) break;
    }
}

// Function to print array
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
