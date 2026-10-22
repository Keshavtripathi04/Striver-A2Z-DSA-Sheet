/*
 * @lc app=leetcode id=3942 lang=cpp
 *
 * [3942] Minimum Operations to Sort a Permutation
 */

// @lc code=start
class Solution {
private:
int getminrotations(vector<int>& nums, int step) {
int n = nums.size();
int idx = -1;


    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            idx = i;
            break;
        }
    }

    if (idx == -1) return -1;

    for (int i = 0; i < n; i++) {
        int pos = (idx + i * step + n) % n;

        if (nums[pos] != i) {
            return -1;
        }
    }

    return idx;
}


public:
int minOperations(vector<int>& nums) {
int n = nums.size();


    int ans1 = getminrotations(nums, 1);
    int ans2 = getminrotations(nums, -1);

    int ans = INT_MAX;

    if (ans1 != -1) {
        ans = min(ans, ans1);
        ans = min(ans, n - ans1 + 2);
    }

    if (ans2 != -1) {
        ans = min(ans, ans2 + 2);
        ans = min(ans, n - ans2);
    }

    return ans == INT_MAX ? -1 : ans;
}


};

// @lc code=end

