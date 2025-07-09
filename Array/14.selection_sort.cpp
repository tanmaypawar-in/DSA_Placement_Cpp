#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example array
    vector<int> arr = {5, 3, 8, 4, 2};
    int n = arr.size();

    // Selection Sort logic
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume current element is the minimum

        // Find the index of the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update the index of the smallest element
            }
        }

        // Swap if the minimum is not at the current position
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
