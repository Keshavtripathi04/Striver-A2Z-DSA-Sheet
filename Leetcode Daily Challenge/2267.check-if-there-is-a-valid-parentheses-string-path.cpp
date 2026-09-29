/*
 * @lc app=leetcode id=2267 lang=cpp
 *
 * [2267]  Check if There Is a Valid Parentheses String Path
 */

// @lc code=start
class Solution {
public:
    int m, n;
    int memo[100][100][201]; // DP memoization table

    bool dfs(int r, int c, int balance, vector<vector<char>>& grid) {
        // Agar balance negative ho gaya, toh parenthesis invalid ho gaya
        if (balance < 0) return false;
        
        // Base case: Bottom-right cell (m-1, n-1) par pahunch gaye
        if (r == m - 1 && c == n - 1) {
            balance += (grid[r][c] == '(' ? 1 : -1);
            return balance == 0;
        }
        
        // Agar pehle se computed hai toh memoized result return karo
        if (memo[r][c][balance] != -1) {
            return memo[r][c][balance];
        }
        
        // Current cell ka character add/minus karo
        int newBalance = balance + (grid[r][c] == '(' ? 1 : -1);
        if (newBalance < 0) return memo[r][c][balance] = 0;

        bool res = false;
        // Move Down
        if (r + 1 < m) {
            res = res || dfs(r + 1, c, newBalance, grid);
        }
        // Move Right
        if (c + 1 < n && !res) {
            res = res || dfs(r, c + 1, newBalance, grid);
        }

        return memo[r][c][balance] = res;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        // Agar total steps odd hain ya end/start par hi '(' ya ')' galat hai
        if ((m + n - 1) % 2 != 0 || grid[0][0] == ')' || grid[m-1][n-1] == '(') {
            return false;
        }

        memset(memo, -1, sizeof(memo));
        return dfs(0, 0, 0, grid);
    }
};
// @lc code=end

