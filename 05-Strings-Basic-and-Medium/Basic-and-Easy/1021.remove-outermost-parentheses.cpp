/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;

        for(char ch :s)
        {
            if(ch=='(')
            {
                if(count>0)
                {
                    ans+=ch;

                    
                }

                count++;
            }
            
            
                
               
            

            else
            {
                count--;

                if(count>0)
                {
                    ans+=ch;
                   
                }
            }
        }

        return ans;
        
    }
};
// @lc code=end

