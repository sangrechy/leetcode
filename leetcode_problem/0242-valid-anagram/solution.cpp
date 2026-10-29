class Solution {
public:
    bool isAnagram(string s, string t) {
        return set<char>(s.begin(),s.end())==set<char>(t.begin(),t.end());
    }
};