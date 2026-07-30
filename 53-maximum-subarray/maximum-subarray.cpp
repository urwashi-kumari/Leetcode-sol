class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cSum=nums[0];
        int mSum=nums[0];
        for(int i=1;i<nums.size();i++){
            cSum=max(nums[i],cSum+nums[i]);
            mSum=max(mSum,cSum);
        }
        return mSum;

        
    }
};