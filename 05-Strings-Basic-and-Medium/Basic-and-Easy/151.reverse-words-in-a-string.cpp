/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {

        string ans="";
        string temp="";

        int n=s.length();

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
            
             if(!temp.empty())
                {
                    reverse(temp.begin(),temp.end());

                    
                        if(!ans.empty())
                        ans+=" ";
                        
                        
                        ans+=temp;
                        temp.clear();
                    
                    
                    
                    
                    
                }

               
                
                
            }

            else
            {
                temp+=s[i];

            }


           

            
            


            

            
        }

         if(!temp.empty()){

                reverse(temp.begin(),temp.end());

                if(!ans.empty())
                ans+=" ";
                
                ans+=temp;
                

                
                

            }
        
            
         

        return ans;


        

         
    }
};
// @lc code=end

