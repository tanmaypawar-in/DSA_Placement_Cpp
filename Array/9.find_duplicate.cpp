#include <iostream>
#include <vector>
using namespace std;

// ✅ Brute Force (Linear Search) Solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // Outer loop picks each element one by one
        for (int i = 0; i < n; i++) {
            
            // Inner loop checks if the same element appears again
            for (int j = i + 1; j < n; j++) {
                
                // If a duplicate is found
                if (nums[i] == nums[j]) {
                    return nums[i];  // Return the duplicate number
                }
            }
        }

        // This should never be reached, as a duplicate is guaranteed
        return -1;
    }
};

int main() {
    Solution sol;

    // 🔽 Test Input
    vector<int> nums = {3, 1, 3, 4, 2};

    // Call the function
    int result = sol.findDuplicate(nums);

    // Print result
    cout << "Duplicate number is: " << result << endl;

    return 0;
}
