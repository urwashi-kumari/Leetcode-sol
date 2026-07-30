class Solution {
public:
    using dt = vector<vector<int>>;

    void permute(vector<int>& nums, dt& ans, int l, int r) {
        if (l == r) {
            ans.push_back(nums);
            return;
        }

        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, ans, l + 1, r);
            swap(nums[l], nums[i]); 
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        dt ans;
        permute(nums, ans, 0, nums.size() - 1);
        return ans;
    }
};