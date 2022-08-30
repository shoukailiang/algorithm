class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        // 从1 1 开始，消除边界
        for(int i =1;i<=m;i++){
            for(int j =1;j<=n;j++){
                // grid 从0 0 开始所以要-1
                dp[i][j] = max(dp[i-1][j],dp[i][j-1])+grid[i-1][j-1];
            }
        }
        return dp[m][n];
    }
};