/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> kt(nums.begin(),nums.end());

        int longest=0;

        for(int num : kt)
        {
            if(kt.find(num-1)==kt.end())
            {
                int current=num;
                int count=1;
            

            while(kt.find(current+1)!=kt.end())
            {
                current++;
                count++;
            }


            longest=max(longest,count);

            

            }

            
        }


        

        return longest;
        
    }
};
// @lc code=end

