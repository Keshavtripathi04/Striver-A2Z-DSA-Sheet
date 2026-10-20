/*
 * @lc app=leetcode id=3886 lang=cpp
 *
 * [3886] Sum of Sortable Integers
 */

// @lc code=start
class Solution {
public:
    int sortableIntegers(vector<int>& nums) {


        int n=nums.size();
        int ans=0;

        for(int i=1;i<=n;i++)
        {
            if(n%i!=0)
            {
                continue;
            }


            bool possible=true;
            vector<vector<int>> sorted_list;
            for(int j=0;j<n;j+=i)
            {
                vector<int>chunk(nums.begin()+j,nums.begin()+j+i);

                int drop=0;
                for(int k=0;k<i;k++)
                {
                    if(chunk[k]>chunk[(k+1)%i])
                    {
                        drop++;
                    }
                }

                if(drop>1)
                {
                    possible=false;
                    break;
                }

                

            sort(chunk.begin(),chunk.end());
            sorted_list.push_back(chunk);


            }


            if(!possible)
            {
                continue;
            }

            for(int l=0;l<sorted_list.size()-1;l++)
            {
                if(sorted_list[l].back()>sorted_list[l+1][0])
                {
                    
                possible=false;
                break;

                }
            }

            
        if(possible)
        {
            ans+=i;
        }





            
        }

        return ans;


        

        

        
    }
};
// @lc code=end

