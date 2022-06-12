/*
 * @lc app=leetcode.cn id=560 lang=java
 *
 * [560] 和为 K 的子数组
 */

// @lc code=start
class Solution {
    public int subarraySum(int[] nums, int k) {
        int[] preSum = new int[nums.length+1];
        for(int i=1;i<preSum.length;i++){
            preSum[i] = preSum[i-1]+nums[i-1];
        }
        int res = 0;
        for(int i=0;i<preSum.length;i++){
            for(int j=0;j<i;j++){
                if(preSum[i]-preSum[j]==k){
                    res++;
                }
            }
        }
        return res;

    }
}
// @lc code=end

