#include <iostream>
#include <vector>
using namespace std;

// LeetCode 268: Find the missing number from 0 to n in a given array of n distinct numbers

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Get the number of elements (actual size of the array)
        int n = nums.size();

        // Calculate the expected total sum from 0 to n using formula n*(n+1)/2
        int total = n * (n + 1) / 2;

        // Calculate the sum of all elements in the array
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }

        // The difference between expected sum and actual sum is the missing number
        return total - sum;
    }
};

int main() {
    Solution sol;

    // Test case: nums contains 3 numbers from range [0,3]; missing number is 2
    vector<int> nums = {3, 0, 1};

    // Call the function and store the result
    int result = sol.missingNumber(nums);

    // Print the missing number
    cout << "Missing number is: " << result << endl;

    return 0;
}