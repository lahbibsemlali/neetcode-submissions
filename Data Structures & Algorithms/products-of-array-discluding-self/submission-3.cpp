class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, hasZero = 0;
        
        for (int& n : nums) {
            if (n != 0)
                product *= n;
            else
                hasZero++;
        }
        if (hasZero == nums.size())
            return nums;
        for (int i = 0; i < nums.size(); i++) {
            if (hasZero > 1)
                nums[i] = 0;
            else
                nums[i] = nums[i] == 0 ? product : hasZero ? 0 : product / nums[i];
        }
        return nums;
    }
};
