/*
 * @lc app=leetcode id=1096 lang=cpp
 *
 * [1096] Brace Expansion II
 */

// @lc code=start
class Solution {
public:

    set<string> combine(set<string>& a, set<string>& b) {
        set<string> res;

        for(string x : a) {
            for(string y : b) {
                res.insert(x + y);
            }
        }

        return res;
    }

    set<string> solve(string& s, int& i) {

        set<string> result;
        set<string> current;

        while(i < s.size() && s[i] != '}') {

            if(s[i] == '{') {

                i++;
                set<string> temp = solve(s, i);
                i++;

                if(current.empty())
                    current = temp;
                else
                    current = combine(current, temp);
            }

            else if(s[i] == ',') {

                for(string x : current)
                    result.insert(x);

                current.clear();
                i++;
            }

            else {

                string word = "";

                while(i < s.size() && isalpha(s[i])) {
                    word += s[i];
                    i++;
                }

                set<string> temp;
                temp.insert(word);

                if(current.empty())
                    current = temp;
                else
                    current = combine(current, temp);
            }
        }

        for(string x : current)
            result.insert(x);

        return result;
    }

    vector<string> braceExpansionII(string expression) {

        int i = 0;

        set<string> ans = solve(expression, i);

        return vector<string>(ans.begin(), ans.end());
    }
};
// @lc code=end

