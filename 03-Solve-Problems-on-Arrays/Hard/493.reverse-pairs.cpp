/*
 * @lc app=leetcode id=493 lang=cpp
 *
 * [493] Reverse Pairs
 */

// @lc code=start
class Solution {
public:
    int reversePairs(vector<int>& nums) {

        return mergesort(nums,0,nums.size()-1);




        
    }

    int mergesort(vector<int> &nums,int low,int high)
    {
        if(low>=high)
        return 0;

        int mid=low+(high-low)/2;

        int count=0;

        count+=mergesort(nums,low,mid);
        count+=mergesort(nums,mid+1,high);

        
        int j=mid+1;

        for(int i=low;i<=mid;i++)
        {
            while(j<=high && (long long)nums[i] >2LL*nums[j])
            {
                j++;
            }

            count+=j-(mid+1);


        }

        merge(nums,low,mid,high);

        return count;


    }

    void merge(vector<int> &nums,int low,int mid,int high)
    {
        vector<int> temp;

        int i=low;
        int j=mid+1;

        while(i<= mid && j<= high)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }

            else
            {
                temp.push_back(nums[j]);
                j++;
            }

        }


        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = low; k <= high; k++) {
            nums[k] = temp[k - low];
        }


        

        

        
    }

    
};
// @lc code=end

