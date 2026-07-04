class Solution {
public:

    string encode(vector<string>& strs) {
        string codedString;

        for (string& str : strs) {
            for (char c : str) {
                codedString += to_string(int(c)) + '#';
            }
            codedString += '|';
        }
        return codedString;
    }

    vector<string> decode(string s) {
        vector<string>  decodedStrings;
        string          tmp, str;

        for (char c : s) {
            if (c == '|') {
                decodedStrings.push_back(str);
                str = "";
            }
            else if (c == '#') {
                str += stoi(tmp);
                tmp = "";
            }
            else
                tmp += c;
        }
        return decodedStrings;
    }
};
