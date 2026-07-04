#include <ranges>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> result;
        vector<vector<int> > buckets(nums.size() + 1);
        
        if (nums.size() == k)
            return nums;

        for (const int& n : nums) {
            count[n]++;
        }
        for (const auto& [key, value] : count) {
            buckets[value].push_back(key);
        }
        for (const vector<int>& bucket : buckets | std::views::reverse) {
            for (int num : bucket) {
                result.push_back(num);
                if (result.size() == k)
                    return result;
            }
        }
        return result;
    }
};
