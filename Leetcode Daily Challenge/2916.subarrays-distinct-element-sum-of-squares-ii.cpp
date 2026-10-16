/*
 * @lc app=leetcode id=2916 lang=cpp
 *
 * [2916] Subarrays Distinct Element Sum of Squares II
 */

// @lc code=start
class Solution {
private:
    int mod = 1e9 + 7;
    vector<long long> sumTree, sqTree, lazy;

    void push(int node, int l, int r) {
        if (lazy[node] != 0) {
            int mid = (l + r) / 2;
            long long val = lazy[node];
            
            // Left child update
            lazy[2 * node] = (lazy[2 * node] + val) % mod;
            sqTree[2 * node] = (sqTree[2 * node] + val * val % mod * (mid - l + 1) % mod + 2 * val * sumTree[2 * node]) % mod;
            sumTree[2 * node] = (sumTree[2 * node] + val * (mid - l + 1)) % mod;
            sqTree[2 * node] = (sqTree[2 * node] + mod) % mod;
            sumTree[2 * node] = (sumTree[2 * node] + mod) % mod;

            // Right child update
            lazy[2 * node + 1] = (lazy[2 * node + 1] + val) % mod;
            sqTree[2 * node + 1] = (sqTree[2 * node + 1] + val * val % mod * (r - mid) % mod + 2 * val * sumTree[2 * node + 1]) % mod;
            sumTree[2 * node + 1] = (sumTree[2 * node + 1] + val * (r - mid)) % mod;
            sqTree[2 * node + 1] = (sqTree[2 * node + 1] + mod) % mod;
            sumTree[2 * node + 1] = (sumTree[2 * node + 1] + mod) % mod;

            lazy[node] = 0;
        }
    }

    void update(int node, int l, int r, int ql, int qr, long long val) {
        if (ql > r || qr < l) return;
        if (ql <= l && r <= qr) {
            sqTree[node] = (sqTree[node] + val * val % mod * (r - l + 1) % mod + 2 * val * sumTree[node]) % mod;
            sumTree[node] = (sumTree[node] + val * (r - l + 1)) % mod;
            sqTree[node] = (sqTree[node] + mod) % mod;
            sumTree[node] = (sumTree[node] + mod) % mod;
            lazy[node] = (lazy[node] + val) % mod;
            return;
        }
        push(node, l, r);
        int mid = (l + r) / 2;
        update(2 * node, l, mid, ql, qr, val);
        update(2 * node + 1, mid + 1, r, ql, qr, val);
        sumTree[node] = (sumTree[2 * node] + sumTree[2 * node + 1]) % mod;
        sqTree[node] = (sqTree[2 * node] + sqTree[2 * node + 1]) % mod;
    }

    long long query(int node, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return 0;
        if (ql <= l && r <= qr) return sqTree[node];
        push(node, l, r);
        int mid = (l + r) / 2;
        return (query(2 * node, l, mid, ql, qr) + query(2 * node + 1, mid + 1, r, ql, qr)) % mod;
    }

public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        sumTree.assign(4 * n, 0);
        sqTree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);

        unordered_map<int, int> lastPos;
        long long totalSum = 0;
        long long currentTotalSq = 0;

        for (int j = 0; j < n; j++) {
            int prev = lastPos.find(nums[j]) != lastPos.end() ? lastPos[nums[j]] : -1;
            lastPos[nums[j]] = j;

            // Range [prev + 1, j] par +1 update karna hai
            update(1, 0, n - 1, prev + 1, j, 1);

            // 0 se j tak ke saare squares ka sum query karo
            long long currentSumSq = query(1, 0, n - 1, 0, j);
            totalSum = (totalSum + currentSumSq) % mod;
        }

        return totalSum;
    }
};
// @lc code=end

