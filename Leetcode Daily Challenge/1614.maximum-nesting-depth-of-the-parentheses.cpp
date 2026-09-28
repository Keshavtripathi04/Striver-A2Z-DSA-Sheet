/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {

        int n=s.size();

        int left=0;
        
        int maxi=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                left++;
            }

            else if(s[i]==')')
            {
                left--;
            }

            maxi=max(maxi,left);
            
        }

        return maxi;



        
    }
};
// @lc code=end

