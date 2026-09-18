/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        

        int n=nums.size();

        int tempmax=nums[0];
        int tempmin=nums[0];

        int ans=nums[0];

        for(int i=1;i<n;i++)
        {
            
            int oldmax = tempmax;
            int oldmin = tempmin;
           
            int a = nums[i];
            int b = nums[i] * oldmax;
            int c = nums[i] * oldmin;

            int newmax = max({a, b, c});
            int newmin = min({a, b, c});

            tempmax=newmax;
            tempmin=newmin;


            ans=max(ans,newmax);
            
        }

        return ans;
    }
};
// @lc code=end

