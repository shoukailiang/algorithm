class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> row;
        unordered_set<string> col;
        unordered_set<string> box;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                char c = board[i][j];
                if(c=='.')
                    continue;
                int boxIndex = i/3*3+j/3;
                string temp1 =to_string(boxIndex)+ to_string(c);
                string temp2= to_string(i)+ to_string(c);
                string temp3= to_string(j)+ to_string(c);
                if(row.count(temp1)||col.count(temp2)||box.count(temp3)){
                    return false;
                }else{
                    row.insert(temp1);
                    col.insert(temp2);
                    box.insert(temp3);
                }
            }
        }
        return true;
    }
};