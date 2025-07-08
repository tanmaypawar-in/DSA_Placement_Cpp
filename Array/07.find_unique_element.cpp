#include <iostream>
using namespace std;

// What is XOR Property ?
// a ^ a = 0 --> Same number cancels itself
// a ^ 0 = a --> XOR with 0 gives the number


int main() {
    int arr[] = {2, 3, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = 0;

    // Loop through the array and XOR each element
    for (int i = 0; i < n; i++) {
        result = result ^ arr[i];
        // You can print result at each step if you want
        // cout << "After XOR with " << arr[i] << ": " << result << endl;
    }

    cout << "The unique element is: " << result << endl;

    return 0;
}