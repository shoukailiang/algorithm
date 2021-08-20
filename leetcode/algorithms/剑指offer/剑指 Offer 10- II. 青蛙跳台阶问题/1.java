class Solution {
  public int numWays(int n) {
      int memo[] = new int[n+1];
      if(n==0||n==1){
          return 1;
      }
      if(n==2){
          return 2;
      }
      memo[0]=memo[1]=1;
      memo[2] =2;
      for(int i=3;i<=n;i++){
          memo[i] = memo[i-1]%1000000007+memo[i-2]%1000000007;
      }
      return memo[n]%1000000007;
  }
}