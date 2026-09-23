/*
 * @lc app=leetcode id=1658 lang=cpp
 *
 * [1658] Minimum Operations to Reduce X to Zero
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int totalsum=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            totalsum+=nums[i];
        }

        int target=totalsum-x;

        if(target< 0) return -1;
        if(target == 0) return n;

        int left=0;
        int right=0;
        int sum=0;
        int maxlen=0;

        while(right<n)
        {

        sum+=nums[right];
        right++;
            

           

            while(sum>target)
            {
                
                sum-=nums[left];
                left++;
            }

            if(sum==target)
            {
                
                maxlen=max(maxlen,right-left);
            }
        }

        if(maxlen == 0)
        return -1;

        return n-maxlen;
        
    }
};
// @lc code=end

