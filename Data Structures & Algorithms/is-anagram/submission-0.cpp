class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> countS, countT;

        if (s.size() != t.size())
            return false;
        for (size_t i = 0; i < s.size(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        for (size_t i = 0; i < s.size(); i++) {
            if (countS[s[i]] != countT[s[i]] || countS[t[i]] != countT[t[i]])
                return false;
        }
        return true;
    }
};
