/*
 * @lc app=leetcode id=3550 lang=cpp
 *
 * [3550] Smallest Index With Digit Sum Equal to Index
 */

// @lc code=start
class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        int ans=-1;
        int n=nums.size();
        

        for(int i=0;i<n;i++)
        {
            int sum=0;
            while(nums[i]>0)
            {
            int digit=nums[i]%10;
            sum+=digit;
            nums[i]/=10;

            }
            

            if(sum==i)
            {
                ans=i;
                break;
            }
        }

        return ans;

        
    }
};
// @lc code=end

