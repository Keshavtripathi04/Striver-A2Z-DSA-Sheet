/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string s, string goal) {

        for(int i=1;i<s.size();i++)
        {
            swap(s[i],goal[i-1]);

        }

        if(s==goal)
        {
            return true;
        }

        else
        {
            return false;
        }
        
    }
};
// @lc code=end

