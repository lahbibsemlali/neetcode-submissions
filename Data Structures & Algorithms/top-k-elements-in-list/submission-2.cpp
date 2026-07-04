class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        priority_queue<pair<int, int> > pq;
        vector<int> result;

        for (int n : nums)
            count[n]++;
        for (auto [key, value] : count)
            pq.push({value, key});
        while (k-- > 0) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
