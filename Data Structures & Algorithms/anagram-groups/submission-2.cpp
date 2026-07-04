class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        vector<vector<string> > result;
        unordered_map<string, vector<string> > groups;
        
        for (string str : strs) {
            vector count(26, 0);
            for (char c : str)
                count[c - 'a']++;
            string hash(count.begin(), count.end());
            groups[hash].push_back(str);
        }
        for (auto [key, group] : groups) {
            result.push_back(group);
        }
        return result;
    }
};
