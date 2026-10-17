/*
 * @lc app=leetcode id=3551 lang=cpp
 *
 * [3551] Minimum Swaps to Sort by Digit Sum
 */

// @lc code=start
class Solution {
private:
    // Helper function to calculate digit sum
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        
        // Store { {digitSum, nums[i]}, original_index }
        vector<pair<pair<int, int>, int>> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = {{getDigitSum(nums[i]), nums[i]}, i};
        }

        // Sort based on digit sum, and if equal, based on the number itself
        sort(arr.begin(), arr.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            // Agar element already visited hai ya apni sahi jagah par hai
            if (visited[i] || arr[i].second == i) {
                continue;
            }

            // Cycle ki size nikalne ke liye
            int cycle_size = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = arr[j].second;
                cycle_size++;
            }

            // Agar cycle ki size K hai, toh (K - 1) swaps lagenge
            if (cycle_size > 1) {
                swaps += (cycle_size - 1);
            }
        }

        return swaps;
    }
};



// @lc code=end

