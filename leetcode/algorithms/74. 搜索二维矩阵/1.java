class Solution {
  public boolean searchMatrix(int[][] matrix, int target) {
       // 从左下方开始,比左下方大,右移动,反之,上移
      int row = matrix.length-1;
      int col = 0;
      while(row>=0&&col<matrix[0].length){
          if(matrix[row][col]>target){
              row--;
          }else if(matrix[row][col]<target){
             col++;
          }else{
              return true;
          }
      }
      return false;
  }
}