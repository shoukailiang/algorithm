class Solution {
private:
    int dp[1000001];
public:
    int numberOfSteps(int num) {
        dp[0] = 0;
        for(int i =1;i<=num;i++){
            if(i&1){
                dp[i] = dp[i-1]+1;
            }else{
                dp[i] = dp[i/2]+1;
            }
        }
        return dp[num];
    }
};