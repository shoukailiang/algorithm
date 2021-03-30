class Solution {
  public int surfaceArea(int[][] grid) {
      int result = 0;
      for (int i = 0; i < grid.length; i++) {
          for (int j = 0; j < grid[i].length; j++) {
              result +=grid[i][j]*6;// 单个的表面积是6
              // 求下垂直的重复面
              if(grid[i][j]>0){
                  result-=(grid[i][j]-1)*2;
              }
              if(i>=1){
                  result-=Math.min(grid[i][j],grid[i-1][j])*2;
              }
              if(j>=1){
                  result-=Math.min(grid[i][j],grid[i][j-1])*2;
              }
          }
      }
      return result;
  }
  public static void main(String[] args) {
    int[][] grid = new int[][]{{1,2},{3,4}};
      Solution solution = new Solution();
      int area = solution.surfaceArea(grid);
      System.out.println(area);
  }
}