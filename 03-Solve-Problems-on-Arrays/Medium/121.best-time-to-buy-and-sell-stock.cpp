/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int n=prices.size();
       int mini=prices[0];
       int profit=0;

       for(int i=1;i<=n-1;i++)
       {
        profit=max(profit,prices[i]-mini);
        mini=min(mini,prices[i]);
       }

       return profit;



        
    }
};
// @lc code=end

