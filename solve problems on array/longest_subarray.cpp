/* //brute force solution

#include<bits/stdc++.h>

using namespace std;

int maxlen(vector<int> nums ,int k)

    
{

    int maxlen1=0;
    for(int i=0; i<nums.size();i++)
    {
        long long sum=0;

         for(int j=i; j<nums.size();j++)
         {
            sum+=nums[j];

            if(sum==k)
            {
                maxlen1=max(maxlen1,j-i+1);
            }
         }

         
        

    
    }

    return maxlen1;
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};

    int k=15;

    cout << "Maximum Length = " << maxlen(nums, k);
} */


/* //optimal solution using hashmap for all arrays having positive negative and zeros'

#include<bits/stdc++.h>

using namespace std;

int maxlen(vector<int> nums ,int k)

    
{
    map<long long,int> mp;

    long long sum=0;
    int maxlen=0;

    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];

        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }

        long long rem=sum-k;

        if(mp.find(rem)!=mp.end())
        {
            int len=i-mp[rem];
            maxlen=max(maxlen,len);
        }

        
        if(mp.find(rem)==mp.end())
        {
            mp[sum]=i;
        }
      


        
    }

    return maxlen;

    }

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};

    int k=15;

    cout << "Maximum Length = " << maxlen(nums, k);
} */


// optimal solution for the arrays having positive and zeros using two pointers




#include<bits/stdc++.h>

using namespace std;

int maxlen(vector<int> nums ,int k)

    
{

    int left=0;
    int right=0;
    long long sum=nums[0];
    int n=nums.size();
    int maxlen=0;

    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=nums[left];
            left++;
        }

        if(sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }

        right++;

        if(right<n)
        {
            
            sum+=nums[right];

        }
    }
    return maxlen;

    }

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};

    int k=15;

    cout << "Maximum Length = " << maxlen(nums, k);
}