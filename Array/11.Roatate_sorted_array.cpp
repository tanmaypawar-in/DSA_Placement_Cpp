#include <iostream>         // For input-output operations
using namespace std;

// Function to find the pivot (largest element) in a rotated sorted array
int findPivot(int arr[], int n) {
    int start = 0;          // Initialize start pointer
    int end = n - 1;        // Initialize end pointer

    while (start <= end) {  // Continue binary search until pointers meet
        int mid = start + (end - start) / 2;  // Prevents overflow

        // Case 1: Check if mid element is greater than the next element
        // If true, mid is the pivot
        if (mid < end && arr[mid] > arr[mid + 1]) {
            return mid;
        }

        // Case 2: Check if mid element is smaller than the previous element
        // If true, previous element is the pivot
        if (mid > start && arr[mid] < arr[mid - 1]) {
            return mid - 1;
        }

        // Case 3: Left part is sorted, move to the unsorted right part
        if (arr[start] <= arr[mid]) {
            start = mid + 1;  // Move right
        }
        else {
            // Case 4: Right part is sorted, move to the unsorted left part
            end = mid - 1;    // Move left
        }
    }

    return -1;  // If no pivot is found (i.e., array is not rotated)
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};   // Example rotated sorted array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in array

    int pivot = findPivot(arr, n);   // Call the pivot function

    if (pivot != -1) {
        // If pivot found, print index and value
        cout << "Pivot found at index: " << pivot 
             << " (Element: " << arr[pivot] << ")" << endl;
    } else {
        // If not rotated, no pivot
        cout << "No pivot found (array not rotated)." << endl;
    }

    return 0;  // Exit program
}
