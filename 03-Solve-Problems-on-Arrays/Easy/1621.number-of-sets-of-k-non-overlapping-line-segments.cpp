/*
 * @lc app=leetcode id=1621 lang=cpp
 *
 * [1621] Number of Sets of K Non-Overlapping Line Segments
 */

// @lc code=start
class Solution {
public:
    long long power(long long a, long long b) {
        long long res = 1;

        while (b > 0) {
            if (b & 1)
                res = res * a % MOD;

            a = a * a % MOD;
            b >>= 1;
        }

        return res;
    }

    static const long long MOD = 1000000007;

    int numberOfSets(int n, int k) {
        int N = n + k - 1;

        vector<long long> fact(N + 1), invFact(N + 1);

        fact[0] = 1;

        for (int i = 1; i <= N; i++) {
            fact[i] = fact[i - 1] * i % MOD;
        }

        invFact[N] = power(fact[N], MOD - 2);

        for (int i = N - 1; i >= 0; i--) {
            invFact[i] = invFact[i + 1] * (i + 1) % MOD;
        }

        // C(n+k-1, 2k)
        long long ans = fact[N];

        ans = ans * invFact[2 * k] % MOD;
        ans = ans * invFact[N - 2 * k] % MOD;

        return ans;
    }
};
// @lc code=end

