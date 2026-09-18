/*
 * @lc app=leetcode id=2149 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n=nums.size();

        int pos=0;
        int neg=1;

        vector<int> ans(n);

        for(int i=0;i <n;i++)
        {
            if(nums[i]>=0)
            {

                ans[pos]=nums[i];
                pos+=2;

            }
            else
            {
                ans[neg]=nums[i];
                neg+=2;
            }
        }

        return ans;


        
    }
};
// @lc code=end

