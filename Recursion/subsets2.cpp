class Solution {
public:
    void generateAllSubsets(vector<int>& nums, vector<int>& result,
    vector<vector<int>>& ans, int i) {
        if (i == nums.size()) {
            ans.push_back({result});
            return;
        }
        result.push_back(nums[i]);
        generateAllSubsets(nums, result, ans, i + 1);

        result.pop_back();
        // not take
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx++;
        }
        generateAllSubsets(nums, result, ans, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        vector<vector<int>> ans;
        generateAllSubsets(nums, result, ans, 0);
        return ans;
    }
};
