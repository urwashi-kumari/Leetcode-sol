class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    
    for (int l = 0; l < nums.size(); l++) {
        if (l > 0 && nums[l] == nums[l - 1])
            continue;

        for (int i = l + 1; i < nums.size(); i++) {
            if (i > l + 1 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1, k = nums.size() - 1;

            while (j < k) {
                long long sum =
                    (long long)nums[l] +
                    nums[i] +
                    nums[j] +
                    nums[k];

                
                if (sum == target) {
                    ans.push_back({nums[l], nums[i], nums[j], nums[k]});

                    while (j < k && nums[j] == nums[j + 1]) j++;
                    while (j < k && nums[k] == nums[k - 1]) k--;

                    j++;
                    k--;
                }
                else if (sum < target) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
    }

    
    return ans;
}

};