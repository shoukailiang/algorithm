class Solution {
private:
    int col = 0;
    int row = 0;
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        row = m;
        col = n;
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(dfs(i,j,0,visited,board,word)){
                    return true;
                }
            }
        }
        return false;
    }
    bool dfs(int i,int j,int start,vector<vector<bool>>& visited,vector<vector<char>>& board,string word){
        if(i<0||i>=row||j<0||j>=col||board[i][j]!=word[start]||visited[i][j]){
            return false;
        }
        if(start==word.size()-1){
            return true;
        }
        visited[i][j] = true;
        bool res = 
            dfs(i-1,j,start+1,visited,board,word)||
            dfs(i+1,j,start+1,visited,board,word)||
            dfs(i,j+1,start+1,visited,board,word)||
            dfs(i,j-1,start+1,visited,board,word);
        visited[i][j] = false;
        return res;
    }
};