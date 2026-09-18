/*
 * @lc app=leetcode id=1477 lang=cpp
 *
 * [1477] Find Two Non-overlapping Sub-arrays Each With Target Sum
 */

// @lc code=start
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();
        vector<int> best(n, INT_MAX);

        int left = 0;
        int right = 0;
        int sum = 0;

        int ans = INT_MAX;
        int minLen = INT_MAX;

        while (right < n) {

            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            if (sum == target) {

                int len = right - left + 1;

                if (left > 0 && best[left - 1] != INT_MAX) {
                    ans = min(ans, len + best[left - 1]);
                }

                minLen = min(minLen, len);
            }

            if (right == 0) {
                best[right] = minLen;
            }
            else {
                best[right] = min(best[right - 1], minLen);
            }

            right++;
        }

        if (ans == INT_MAX) {
            return -1;
        }

        return ans;
    }
}
;
// @lc code=end

