class Solution {
  public int numRookCaptures(char[][] board) {
    int result = 0;
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        if(board[i][j]=='R'){
          // 右侧
          for (int k = i; k < 8; k++) {
            if(board[k][j]=='B'){
              break;
            }else if (board[k][j]=='p'){
              result++;
              break;
            }
          }

          // 左侧
          for (int k = i; k >=0; k--) {
            if(board[k][j]=='B'){
              break;
            }else if (board[k][j]=='p'){
              result++;
              break;
            }
          }

          // 上侧
          for (int k = j; k >=0; k--) {
            if(board[i][k]=='B'){
              break;
            }else if (board[i][k]=='p'){
              result++;
              break;
            }
          }

          // 下侧
          for (int k = j; k <8; k++) {
            if(board[i][k]=='B'){
              break;
            }else if (board[i][k]=='p'){
              result++;
              break;
            }
          }
        }
      }
    }
    return result;
  }
  // test
  public static void main(String[] args) {
    char[][] grid = new char[][]{
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','p','.','.','.','.'},
        {'.','.','.','R','.','.','.','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','p','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'}
    };
    Solution solution = new Solution();
    int n = solution.numRookCaptures(grid);
    System.out.println(n);
  }
}