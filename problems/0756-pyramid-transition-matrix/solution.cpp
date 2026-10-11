class Solution {
public:
    unordered_map<string, vector<char>> mp;
    unordered_map<string, bool> memo;

    bool fun(string s, vector<string>& v){
        if (s.size() == 1) return true;
        if (memo.count(s)) return memo[s];

        vector<string> v1 = {""};
        for (int i = 0; i < s.length() - 1; i++) {
            string key = s.substr(i, 2);
            if (!mp.count(key)) return memo[s] = false;

            vector<string> v2;
            for (char c : mp[key]) v2.push_back(string(1, c));

            vector<string> v3;
            for (string j : v1)
                for (string i2 : v2)
                    v3.push_back(j + i2);

            v1 = v3;
        }

        for (string t : v1)
            if (fun(t, v)) return memo[s] = true;

        return memo[s] = false;
    }

    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for (auto &x : allowed)
            mp[x.substr(0,2)].push_back(x[2]);
        return fun(bottom, allowed);
    }
};
