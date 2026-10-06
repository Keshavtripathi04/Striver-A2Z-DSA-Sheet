/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                low++;
                high++;
            } else if (s[i] == ')') {
                if (low > 0) {
                    low--;
                }
                high--;
            } else {
                if (low > 0) {
                    low--;
                }
                high++;
            }

            if (high < 0) {
                return false;
            }
        }
        return low == 0;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(string s) {
        
    }
};
// @lc code=end

