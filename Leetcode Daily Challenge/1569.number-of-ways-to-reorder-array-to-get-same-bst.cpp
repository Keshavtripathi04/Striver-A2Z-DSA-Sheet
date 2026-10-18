/*
 * @lc app=leetcode id=1569 lang=cpp
 *
 * [1569] Number of Ways to Reorder Array to Get Same BST
 */

// @lc code=start
class Solution {
private:
    long long mod = 1e9 + 7;
    vector<vector<long long>> table;

    // Line 7-13: Combinatorics (nCr) nikalne ka function Pascal's Triangle (DP) ke sath
    long long nCr(int n, int r) {
        if (r < 0 || r > n) return 0;
        if (r == 0 || r == n) return 1;
        if (table[n][r] != -1) return table[n][r]; // Memoization taaki bar-bar calculate na karna pade
        return table[n][r] = (nCr(n - 1, r - 1) + nCr(n - 1, r)) % mod;
    }

    // Line 16-36: Recursive function jo har subtree ke ways nikalega
    long long solve(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return 1; // Agar 2 ya usse kam elements hain, toh sirf 1 hi tarika hai

        vector<int> left, right;
        int root = nums[0]; // Pehla element hamesha root hoga

        // Line 23-28: Root se chhote elements ko 'left' me aur bade ko 'right' me baato
        for (int i = 1; i < n; i++) {
            if (nums[i] < root) {
                left.push_back(nums[i]);
            } else {
                right.push_back(nums[i]);
            }
        }

        // Line 31-32: Left aur Right subtrees ke ways recursively nikalo
        long long leftWays = solve(left) % mod;
        long long rightWays = solve(right) % mod;

        // Line 35: Combinations formula se mix hone ke total ways nikalo: nCr(total_positions, left_size)
        long long ways = nCr(n - 1, left.size());
        
        // Line 36-37: Dono subtrees ke ways ko multiply karo (modulo ke sath)
        ways = (ways * leftWays) % mod;
        ways = (ways * rightWays) % mod;

        return ways;
    }

public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        
// Line 44-45: DP table ko -1 se initialize kar rahe hain nCr ke liye
        table.resize(n + 1, vector<long long>(n + 1, -1));

        // Line 48: Total ways nikal kar usme se 1 minus karte hain 
        // kyunki original array ko count nahi karna hota, sirf *reorderings* batani hoti hain
        return (solve(nums) - 1 + mod) % mod;
    }
};
// @lc code=end

