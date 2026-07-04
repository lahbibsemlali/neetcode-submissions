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
        string          tmp, str;

        for (int i = 0; i < s.size(); i++) {
            cout << i << endl;
            if (s[i] == '#') {
                int n = stoi(tmp);
                i++;
                while (n-- && i < s.size())
                    str += s[i++];
                i--;
                decodedStrings.push_back(str);
                str = "";
                tmp = "";
            }
            else
                tmp += s[i];
        }
        return decodedStrings;
    }
};
