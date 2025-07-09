#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort Function
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at correct position
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 4, 6, 1};

    insertionSort(arr);  // Call sort

    // Print sorted array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;  // ✅ Here it is!
}
