class Solution {
  int[] memo;
  public int dp(int[] coins, int amount){
      if(amount==0) return 0;
      if(amount<0) return -1;
      if(memo[amount]!=888){
          return memo[amount];
      }
      int res= Integer.MAX_VALUE;
      for(int coin :coins){
          // 计算子问题
          int subproblem = dp(coins,amount-coin);
          // 子问题无解
          if(subproblem==-1) continue;
          res = Math.min(res,subproblem+1);
      }
      memo[amount] = res == Integer.MAX_VALUE?-1:res;
      return memo[amount];
  }
  public int coinChange(int[] coins, int amount) {
      memo = new int[amount+1];
      Arrays.fill(memo,888);
      return dp(coins,amount);
      
  }
}