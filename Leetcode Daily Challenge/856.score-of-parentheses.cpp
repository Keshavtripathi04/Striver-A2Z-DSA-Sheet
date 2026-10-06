/*
 * @lc app=leetcode id=856 lang=cpp
 *
 * [856] Score of Parentheses
 */

// @lc code=start
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for (char c : s) {
            if (c == '(') {
                st.push(0);
            } else {
                int x = st.top();
                st.pop();

                int score = (x == 0) ? 1 : 2 * x;

                st.top() += score;
            }
        }

        return st.top();
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=856 lang=cpp
 *
 * [856] Score of Parentheses
 */

// @lc code=start
class Solution {
public:
    int scoreOfParentheses(string s) {
        
    }
};
// @lc code=end

