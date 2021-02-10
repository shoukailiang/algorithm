// 优化版
class Solution {
  public boolean findNumberIn2DArray(int[][] matrix, int target) {
      int i = matrix.length-1;
      int j = 0;
      while(i>=0&&j<=matrix[i].length-1){
          if(matrix[i][j]<target) {
              j++;
          }else if(matrix[i][j]>target){
              i--;
          }else{
              return true;
          }
      }
      return false;
  }
}