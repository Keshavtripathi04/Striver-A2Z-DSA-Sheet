/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int ele1=0;
        int ele2=0;
        int count1=0,count2=0;

        int n=nums.size();

        for(int num : nums)
        {
            if(ele1==num)
            {
                count1++;
            }

            else if (ele2==num)
            {
                count2++;
            }

            else if(count1==0)
            {
                ele1=num;
                count1=1;
            }

            else if(count2==0)
            {
                ele2=num;
                count2=1;
            }

            else
            {
                count1--;
                count2--;
            }
        }

        count1=0;
        count2=0;

        vector<int> ans;

        for(int num : nums)
        {
            if(num==ele1)
            {
                count1++;
                
            }
            else if(num==ele2)
            {
                count2++;
            }
        }

        if(count1 > n/3)
        {
            ans.push_back(ele1);
        }
        
    
        if(count2 > n/3)
        {
            ans.push_back(ele2);
        }

        return ans;
        
    }
};
// @lc code=end

