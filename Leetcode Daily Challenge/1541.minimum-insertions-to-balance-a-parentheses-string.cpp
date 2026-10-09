/*
 * @lc app=leetcode id=1541 lang=cpp
 *
 * [1541] Minimum Insertions to Balance a Parentheses String
 */

// @lc code=start
class Solution {
public:
    int minInsertions(string s) {
        int neededRight = 0;
        int missingLeft = 0;
        int missingRight = 0;

        for (const char c : s) {
            if (c == '(') {
                if (neededRight % 2 == 1) {
                    ++missingRight;
                    --neededRight;
                }
                neededRight += 2;
            } else {
                --neededRight;
                if (neededRight < 0) {
                    ++missingLeft;
                    neededRight += 2;
                }
            }
        }

        return neededRight + missingLeft + missingRight;
    }
};
// @lc code=end

