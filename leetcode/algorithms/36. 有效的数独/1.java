class Solution {
    public boolean isValidSudoku(char[][] board) {
        HashSet<String> chars = new HashSet<>();
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    char c = board[i][j];
                    if(c=='.') continue;
                    int boxIndex =i/3*3+j/3;// 在第几个盒子
                    String row =c+"in row"+i;
                    String col =c+"in col"+j;
                    String box =c+"in box"+boxIndex;
                    boolean res = chars.add(row)&&chars.add(col)&&chars.add(box);
                    if(!res) return false;
                }
            }
            return true;
    }
}