class Solution {
private:
    int dfs(int x,int y,int m ,int n,int k,vector<vector<bool>>& visited){
        if(x>=m||y>=n||visited[x][y]|| (x % 10 + x / 10 + y % 10 + y / 10) > k){
            return 0;
        }
        visited[x][y] = true;
        return 1+dfs(x + 1, y, m, n, k,visited)+dfs(x, y + 1, m, n, k,visited);
    }
public:
    int movingCount(int m, int n, int k) {
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        return dfs(0,0,m,n,k,visited);
    }
};