class Solution {
  public int maxSubArray(int[] nums) {
      int n = nums.length;
      if(n==0){
          return 0;
      } 
      int [] dp = new int[n];
      // base 
      dp[0] = nums[0];
      // 状态转移方程
      for(int i=1;i<n;i++){
        //  dp[i] 前i的最大
        // num[i] 当前这个
          dp[i] = Math.max(nums[i],dp[i-1]+nums[i]);
      }
      // 寻找dp[] 中的最大的一个
      int res = Integer.MIN_VALUE;
      for(int i=0;i<n;i++){
          res = Math.max(res,dp[i]);
      }
      return res;

  }
}