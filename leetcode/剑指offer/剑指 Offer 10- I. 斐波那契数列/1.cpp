class Solution {
public:
    int fib(int n) {
        int memo[n+1];
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        memo[0] = 0;
        memo[1] = 1;
        for(int i=2;i<=n;i++){
            memo[i] = memo[i-2]%1000000007+memo[i-1]%1000000007;
        }
        return memo[n]%1000000007;
    }
};