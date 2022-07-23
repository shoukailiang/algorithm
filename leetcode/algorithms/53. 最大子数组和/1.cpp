#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        vector<int> dp(n,0);
        dp[0] = nums[0];
        for(int i =1;i<nums.size();i++){
            dp[i] = max(nums[i],nums[i]+dp[i-1]);
        }
        int res = dp[0];
        for(int i=0;i<n;i++){
            res = max(res,dp[i]);
        }
        return res;
    }
};
int main() {
    vector<int> arr ={-2,1,-3,4,-1,2,1,-5,4};
    Solution().maxSubArray(arr);
    return 0;
}
