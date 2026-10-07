/*
 * @lc app=leetcode id=301 lang=cpp
 *
 * [301] Remove Invalid Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> ans;
        unordered_set<string> st;
        
        int left = 0, right = 0;
        
        for(char c : s) {
            if(c == '(') {
                left++;
            }
            else if(c == ')') {
                if(left > 0)
                    left--;
                else
                    right++;
            }
        }
        
        function<void(int, int, int, string)> solve = [&](int idx, int l, int r, string curr) {
            if(l == 0 && r == 0) {
                int bal = 0;
                for(char c : curr) {
                    if(c == '(') bal++;
                    else if(c == ')') {
                        if(bal == 0) return;
                        bal--;
                    }
                }
                
                if(bal == 0)
                    st.insert(curr);
                
                return;
            }
            
            for(int i = idx; i < s.size(); i++) {
                if(i != idx && s[i] == s[i-1])
                    continue;
                
                if(r > 0 && s[i] == ')') {
                    solve(i + 1, l, r - 1, curr);
                }
                
                if(l > 0 && s[i] == '(') {
                    solve(i + 1, l - 1, r, curr);
                }
                
                curr += s[i];
            }
        };
        
        // Simpler DFS approach
        function<void(int,int,int,string)> dfs = [&](int i, int l, int r, string cur) {
            if(i == s.size()) {
                if(l == 0 && r == 0) {
                    int bal = 0;
                    for(char c : cur) {
                        if(c == '(') bal++;
                        else if(c == ')') {
                            if(bal == 0) return;
                            bal--;
                        }
                    }
                    if(bal == 0)
                        st.insert(cur);
                }
                return;
            }
            
            if(s[i] == '(' && l > 0)
                dfs(i + 1, l - 1, r, cur);
            
            if(s[i] == ')' && r > 0)
                dfs(i + 1, l, r - 1, cur);
            
            dfs(i + 1, l, r, cur + s[i]);
        };
        
        dfs(0, left, right, "");
        
        for(auto x : st)
            ans.push_back(x);
        
        return ans;
    }
};
// @lc code=end

