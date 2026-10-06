/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char> st;
        st.push(s[0]);

        for(int i=1;i<s.size();i++)
        {
            

            if(!st.empty() && st.top() == '(' && s[i] == ')')
            {
                st.pop();
                continue;
            }

            st.push(s[i]);
        }

        return st.size();




        
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=921 lang=cpp
 *
 * [921] Minimum Add to Make Parentheses Valid
 */

// @lc code=start
class Solution {
public:
    int minAddToMakeValid(string s) {
        
    }
};
// @lc code=end

