/*
 * @lc app=leetcode id=3841 lang=cpp
 *
 * [3841] Palindromic Path Queries in a Tree
 */

// @lc code=start
class Solution
{
    int LOG;
    int timer = 0;

    vector<vector<int>> adj, up;
    vector<int> tin, tout, depth;
    vector<int> bit, mask;

    void add(int idx, int val, int n)
    {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] ^= val;
    }

    int get(int idx)
    {
        int res = 0;
        for (; idx > 0; idx -= idx & -idx)
            res ^= bit[idx];
        return res;
    }

    void rangeXor(int l, int r, int val, int n)
    {
        add(l, val, n);
        if (r + 1 <= n)
            add(r + 1, val, n);
    }

    void dfs(int root)
    {
        vector<array<int, 3>> st;
        st.push_back({root, 0, 0});

        while (!st.empty())
        {
            auto [u, p, state] = st.back();
            st.pop_back();

            if (state == 0)
            {
                tin[u] = ++timer;
                up[0][u] = p;

                st.push_back({u, p, 1});

                for (int i = (int)adj[u].size() - 1; i >= 0; i--)
                {
                    int v = adj[u][i];

                    if (v == p)
                        continue;

                    depth[v] = depth[u] + 1;
                    st.push_back({v, u, 0});
                }
            }
            else
            {
                tout[u] = timer;
            }
        }
    }

    int lca(int u, int v)
    {
        if (depth[u] < depth[v])
            swap(u, v);

        int diff = depth[u] - depth[v];

        for (int k = 0; k < LOG; k++)
        {
            if (diff & (1 << k))
                u = up[k][u];
        }

        if (u == v)
            return u;

        for (int k = LOG - 1; k >= 0; k--)
        {
            if (up[k][u] != up[k][v])
            {
                u = up[k][u];
                v = up[k][v];
            }
        }

        return up[0][u];
    }

public:
    vector<bool> palindromePath(int n, vector<vector<int>> &edges,
                                string s, vector<string> &queries)
    {

        LOG = 1;
        while ((1 << LOG) <= n)
            LOG++;

        timer = 0;

        adj.assign(n, {});
        up.assign(LOG, vector<int>(n, 0));
        tin.assign(n, 0);
        tout.assign(n, 0);
        depth.assign(n, 0);
        bit.assign(n + 2, 0);
        mask.resize(n);

        for (auto &e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(0);

        for (int k = 1; k < LOG; k++)
        {
            for (int u = 0; u < n; u++)
            {
                up[k][u] = up[k - 1][up[k - 1][u]];
            }
        }

        for (int i = 0; i < n; i++)
        {
            mask[i] = 1 << (s[i] - 'a');
            rangeXor(tin[i], tout[i], mask[i], n);
        }

        vector<bool> ans;

        for (string &q : queries)
        {
            string type;
            int u;
            char c;

            stringstream ss(q);
            ss >> type >> u;

            if (type == "update")
            {
                ss >> c;

                int newMask = 1 << (c - 'a');
                int delta = mask[u] ^ newMask;

                rangeXor(tin[u], tout[u], delta, n);

                mask[u] = newMask;
                s[u] = c;
            }
            else
            {
                int v;
                ss >> v;

                int w = lca(u, v);

                int pathMask = get(tin[u]) ^ get(tin[v]) ^ mask[w];

                ans.push_back((pathMask & (pathMask - 1)) == 0);
            }
        }

        return ans;
    }
};
// @lc code=end
