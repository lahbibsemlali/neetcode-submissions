class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> dups;
        for (auto n : nums) {
            dups[n]++;
            if (dups[n] > 1)
                return true;
        }
        return false;
    }
};