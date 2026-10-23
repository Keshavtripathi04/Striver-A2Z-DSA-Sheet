/*
 * @lc app=leetcode id=3644 lang=cpp
 *
 * [3644] Maximum K to Sort a Permutation
 */

// @lc code=start
class Solution {
public:
    int sortPermutation(vector<int>& nums) {

        int ans=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
                ans=ans & nums[i];
            }

        }

        return max(ans,0);
        
    }
};
// @lc code=end

