class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        dp[0] = nums[0];
        int res = dp[0];
        for(int i =1;i<nums.size();i++){
            dp[i] = max(dp[i-1]+nums[i],nums[i]);
            res = max(res,dp[i]);
        }
        return res;
    }
};