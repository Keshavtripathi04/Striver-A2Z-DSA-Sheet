/*
 * @lc app=leetcode id=1111 lang=cpp
 *
 * [1111] Maximum Nesting Depth of Two Valid Parentheses Strings
 */

// @lc code=start
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans;
        int current=0;

        for(char c : seq )
        {
            if(c=='(')
            {
                current++;
                ans.push_back((current-1)%2);
            }
            else
            {
                ans.push_back((current-1)%2);
                current--;
            }
        }
        return ans;

    }
};
// @lc code=end

