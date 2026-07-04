class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            if (result.contains(target - nums[i]))
                return {result[target - nums[i]], i};
            result[nums[i]] = i;
        }
        return {};
    }
};
