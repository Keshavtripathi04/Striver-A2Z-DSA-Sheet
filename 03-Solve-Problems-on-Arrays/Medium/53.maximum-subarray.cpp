/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum=0;
        int maxi=nums[0];

        for(int num :nums)
        {
            sum+=num;

            maxi=max(maxi,sum);

            if(sum<0)
            {
                sum=0;
            }
        }

        return maxi;


        
    }
};
// @lc code=end

