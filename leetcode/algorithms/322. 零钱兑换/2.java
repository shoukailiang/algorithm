class Solution {
  public int coinChange(int[] coins, int amount) {
      int[] dp = new int[amount+1];
      Arrays.fill(dp,amount+1);
      // base case 
      dp[0] = 0;
      // 外层for循环遍历所有状态的所有取值
      for(int i=1;i<dp.length;i++){
          // 内层for循环在求所有选择的最小值
          for(int coin : coins){
              if(i-coin<0) continue;
              // 状态转移
              dp[i] = Math.min(dp[i],1+dp[i-coin]);
          }  
      }  
      return dp[amount]==amount+1?-1:dp[amount];      
  }
}