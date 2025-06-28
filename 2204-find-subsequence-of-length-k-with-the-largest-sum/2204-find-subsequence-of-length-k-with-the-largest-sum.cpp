class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> withIndex;
        for (int i = 0; i < nums.size(); ++i) {
            withIndex.push_back({nums[i], i});
        }

        sort(withIndex.begin(), withIndex.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });

        withIndex.resize(k);

        sort(withIndex.begin(), withIndex.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        vector<int> result;
        for (auto& [val, idx] : withIndex) {
            result.push_back(val);
        }

        return result;
    }
};
