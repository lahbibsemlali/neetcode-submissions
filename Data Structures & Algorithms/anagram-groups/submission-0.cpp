class Solution {
public:
    bool    isAnagram(string& str1, string& str2) {
        if (str1.size() != str2.size())
            return false;

        vector count(26, 0);

        for (int i = 0; i < str1.size(); i++) {
            count[str1[i] - 'a']++;
            count[str2[i] - 'a']--;
        }
        for (int j = 0; j < 26; j++) {
            if (count[j] != 0)
                return false;
        }
        return true;
    }

    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        vector<vector<string> > result;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            vector<string> res;
            if (visited[i])
                continue;
            res.push_back(strs[i]);
                cout << "been here" << visited[i] << endl;
            for (int j = 0; j < strs.size(); j++) {
                if (visited[j] || i == j)
                    continue;
                if (isAnagram(strs[i], strs[j])) {
                    res.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            visited[i] = true;
            result.push_back(res);
        }
        return result;
    }
};
