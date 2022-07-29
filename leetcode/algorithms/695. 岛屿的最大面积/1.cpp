class Solution {
private:
    int res = 0;
    int dfs(vector<vector<int>> &grid,int sr,int sc){
        if(sc<0||sr<0||sr>grid.size()-1||sc>grid[0].size()-1||grid[sr][sc]!=1){
            return 0;
        }
        grid[sr][sc] = 2;
        return 1+dfs(grid,sr-1,sc)+dfs(grid,sr,sc+1)+dfs(grid,sr+1,sc)+dfs(grid,sr,sc-1);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                res= max(res,dfs(grid,i,j));
            }
        }
        return res;
    }
};