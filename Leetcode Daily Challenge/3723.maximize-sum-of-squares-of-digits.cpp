/*
 * @lc app=leetcode id=3723 lang=cpp
 *
 * [3723] Maximize Sum of Squares of Digits
 */

// @lc code=start
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if (sum > num * 9 || sum < 0) {
            return "";
        }
        string result = "";
        int rem_sum = sum;

        for (int i = 0; i < num; i++) {
            int rem_pos = num - 1 - i;
            
            int chosen_digit = 0;
            for (int d = min(9, rem_sum); d >= 0; d--) {
                if (rem_sum - d <= rem_pos * 9) {
                    chosen_digit = d;
                    break;
                }
            }
            
            result += to_string(chosen_digit);
            rem_sum -= chosen_digit;
        }

        return result;

        


        
    }
};
// @lc code=end

