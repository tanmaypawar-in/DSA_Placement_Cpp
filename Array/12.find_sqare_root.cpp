#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

// Function to calculate square root with given decimal precision
double preciseSqrt(int x, int precision) {
    int start = 0, end = x;
    double root = 0.0;

    // Step 1: Integer part using Binary Search
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid * mid == x)
            return mid;

        if (mid * mid < x) {
            root = mid;           // store possible answer
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Step 2: Decimal precision part
    double increment = 0.1;

    for (int i = 0; i < precision; i++) {
        while (root * root <= x) {
            root += increment;
        }
        root -= increment;        // step back after overshooting
        increment /= 10;          // go to next decimal place
    }

    return root;
}

int main() {
    int number;
    int precision;

    // Input from user
    cout << "Enter number: ";
    cin >> number;

    cout << "Enter precision (e.g. 3 for 0.001): ";
    cin >> precision;

    // Call function and print result
    double result = preciseSqrt(number, precision);

    cout << fixed << setprecision(precision);
    cout << "Square root of " << number << " = " << result << endl;

    return 0;
}
