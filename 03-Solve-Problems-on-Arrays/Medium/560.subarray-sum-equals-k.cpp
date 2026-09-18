/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<long long,int> mp;
        mp[0]=1;
        long long count=0;
        long long sum=0;

        for( int num :nums)
        {
            sum+=num;

         

            if(mp.find(sum-k)!=mp.end())
            {
                count+=mp[sum-k];
            }

            mp[sum]++;
        }



        return count;
    }
};
// @lc code=end

