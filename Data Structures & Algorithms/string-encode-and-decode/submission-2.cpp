class Solution {
public:

    string encode(vector<string>& strs) {
        string codedString;

        for (string& str : strs)
            codedString += to_string(str.size()) + '#' + str;
        return codedString;
    }

    vector<string> decode(string s) {
        vector<string>  decodedStrings;
        string          tmp;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                int n = stoi(tmp);
                decodedStrings.push_back(s.substr(i + 1, n));
                tmp = "";
                i += n;
            }
            else
                tmp += s[i];
        }
        return decodedStrings;
    }
};
