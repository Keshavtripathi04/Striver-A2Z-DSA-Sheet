/*
 * @lc app=leetcode id=3619 lang=cpp
 *
 * [3619] Count Islands With Total Value Divisible by K
 */

// @lc code=start
class Solution
{
private:
    long long dfs(int r, int c, vector<vector<int>> &grid,
                  vector<vector<bool>> &visited, int m, int n)
    {

        if (r < 0 || c < 0 || r >= m || c >= n ||
            grid[r][c] == 0 || visited[r][c])
        {
            return 0;
        }

        visited[r][c] = true;

        long long sum = grid[r][c];

        sum += dfs(r - 1, c, grid, visited, m, n);
        sum += dfs(r + 1, c, grid, visited, m, n);
        sum += dfs(r, c - 1, grid, visited, m, n);
        sum += dfs(r, c + 1, grid, visited, m, n);

        return sum;
    }

public:
    int countIslands(vector<vector<int>> &grid, int k)
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        int count = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (grid[i][j] != 0 && !visited[i][j])
                {
                    long long sum = dfs(i, j, grid, visited, m, n);

                    if (sum % k == 0)
                    {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
// @lc code=end
