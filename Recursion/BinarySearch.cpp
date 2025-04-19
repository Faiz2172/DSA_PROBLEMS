class Solution {
public:
    int searchrecursion(vector<int>& nums, int low, int high, int target) {
        if (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] >= target) {
                return searchrecursion(nums, low, mid - 1, target);
            } else {
                return searchrecursion(nums, mid + 1, high, target);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        return searchrecursion(nums, low, high, target);;
    }
};
