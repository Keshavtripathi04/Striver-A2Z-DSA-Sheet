/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> kp;

        for(int i=0;i<nums.size();i++)
        {
            int rem=target-nums[i];

            if(kp.find(rem)!=kp.end())
            {
                return{kp[rem],i};
            }

            kp[nums[i]]=i;
        }

        return{};
        
    }
};
// @lc code=end

