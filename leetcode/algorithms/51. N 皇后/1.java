class Solution {

  List<List<String>> res=new ArrayList<>();
  List<List<String>> solveNQueens(int n){
      // '.' 表示空，'Q' 表示皇后，初始化空棋盘
      char[][] board = new char[n][n];
      for (char[] chars : board) {
          Arrays.fill(chars,'.');
      }
      backtrack(board,0);
      return res;
  }

  private void backtrack(char[][] board, int row) {
      // base case
      if(row==board.length){
          res.add(Array2List(board));
          return;
      }
      int n = board[row].length;
      for(int col=0;col<n;col++){
          if(!isValid(board,row,col)){
              // 排除不合法的
              continue;
          }
          // 做选择
          board[row][col] = 'Q';
          // 进入下一决策
          backtrack(board,row+1);
          // 撤销决策
          board[row][col] = '.';
      }
  }

  private boolean isValid(char[][] board, int row, int col) {
      int n= board.length;
      //检查列是否冲突
      for (int i = 0; i < n; i++) {
          if(board[i][col]=='Q'){
              return false;
          }
      }
      // 检查右上方
      for (int i=row-1, j=col+1;i>=0&&j<n;i--,j++){
          if(board[i][j]=='Q'){
              return false;
          }
      }
      // 检查左上方
      for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
          if(board[i][j]=='Q'){
              return false;
          }
      }
      return true;
  }

  private List Array2List(char[][] board) {
      List<String> list = new ArrayList<>();
      for (char[] c : board) {
          list.add(String.copyValueOf(c));
      }
      return list;
  }


  public static void main(String[] args) {
      List<List<String>> lists = new Solution().solveNQueens(4);
      System.out.println(lists.toString());
  }
}