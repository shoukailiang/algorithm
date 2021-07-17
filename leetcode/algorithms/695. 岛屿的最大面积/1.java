class Solution {
    int area[] = new int[2];
    public int maxAreaOfIsland(int[][] grid) {
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]==1){
                    area[0] = 0;
                    dfs(grid,i,j);
                    area[1] = Math.max(area[0],area[1]);
                }
            }
        }
        return area[1];
    }
    public void dfs(int[][] grid,int i,int j){
        if(i<0||j<0||i>=grid.length||j>=grid[i].length||grid[i][j]!=1){
            return ;
        }
        area[0]++;
        grid[i][j] = 100;// 表示已经遍历
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
}