package com.company;

class Solution {
    public int maxProfit(int[] prices) {
       int n = prices.length;
       if(n<2){
           return 0;
       }
       // base case
        int[][] dp= new int[n][2];
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        // 从第2天开始遍历
        for (int i = 1; i < n; i++) {
            dp[i][0] = Math.max(dp[i-1][0],dp[i-1][1]+prices[i]);
            //因为只允许交易一次，而初始现金是0，所以一直没交易过，昨天不持股今天持股之后手上的现金只剩-prices[i]
            dp[i][1] = Math.max(dp[i-1][1],-prices[i]);
        }
        return dp[n-1][0];
    }

    public static void main(String[] args) {
        int i = new Solution().maxProfit(new int[]{1, 2, 3, 4, 5});
        System.out.println(i);
    }
}