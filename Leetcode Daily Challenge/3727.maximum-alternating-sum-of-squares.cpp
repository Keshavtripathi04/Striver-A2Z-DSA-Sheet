/*
 * @lc app=leetcode id=3727 lang=cpp
 *
 * [3727] Maximum Alternating Sum of Squares
 */

// @lc code=start
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        int n=nums.size();

        sort(nums.begin(),nums.end(),[](int a,int b) { return abs(a)< abs(b);});

        long long sum=0;
        long long right=n-1;
        long long left=0;

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum+=nums[right]*nums[right];
                right--;
            }

            else
            {
                sum-=nums[left]*nums[left];
                left++;
            }
        }
        return sum;
        
    }
};
// @lc code=end

