/*
 * @lc app=leetcode id=2913 lang=cpp
 *
 * [2913] Subarrays Distinct Element Sum of Squares I
 */

// @lc code=start
class Solution {
public:
    int sumCounts(vector<int>& nums) {

        int totalsum=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            unordered_set<int> st;

            for(int j=i;j<n;j++)
            {
                st.insert(nums[j]);
                int stsize=st.size();
                totalsum+=(stsize*stsize);
                
            }

            
        }

        return totalsum;


        
    }
};
// @lc code=end

