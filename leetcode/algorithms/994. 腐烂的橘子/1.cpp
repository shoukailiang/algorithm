class Solution {
private:
    int row;
    int col;
public:
    bool isRange(int x, int y) {
        if(x>=0&&y>=0&&x<row&&y<col){
            return true;
        }
        return false;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int result = -1;
        queue<pair<int,int>> que;
        // 上下左右
        vector<vector<int>> direction{{-1,0},{1,0},{0,-1},{0,1}};
        int m = grid.size(),n = grid[0].size();
        row = m;
        col = n;
        int fresh= 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(grid[i][j] == 2){
                    que.push({i,j});
                    // 去重
                    grid[i][j] = -1;
                }else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0){
            return 0;
        }
        int round = 0;
        while(!que.empty()){
            int size = que.size();
            for (int i = 0; i < size; ++i) {
                pair<int,int> curPos = que.front();
                que.pop();
                for (int j = 0; j < 4; ++j) {
                    int newX = curPos.first+direction[j][0];
                    int newY = curPos.second+direction[j][1];
                    if(isRange(newX,newY)&&grid[newX][newY]==1){
                        fresh--;
                        if(fresh==0){
                            return round+1;
                        }
                        grid[newX][newY] = -1;
                        que.push({newX,newY});
                    }
                }
            }
            round++;
        }

        return fresh==0? round:-1;
    }
};