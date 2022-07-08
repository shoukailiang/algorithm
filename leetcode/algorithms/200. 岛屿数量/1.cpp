#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
private:
    void dfs(vector<vector<char>>& grid,int r,int c){
        if(r<0||c<0||r>grid.size()-1||c>grid[0].size()-1){
            return;
        }
        if(grid[r][c]!='1'){
            return;
        }
        grid[r][c] = '0';
        dfs(grid,r-1,c);
        dfs(grid,r,c+1);
        dfs(grid,r+1,c);
        dfs(grid,r,c-1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int num= 0;
        int r = grid.size();
        int c = grid[0].size();
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                if(grid[i][j]=='1'){
                    num++;
                    dfs(grid,i,j);
                }
            }
        }
        return num;
    }
};
int main() {
    vector<vector<char>> mm = {
            {'1','1','1','1','0'},
            {'1','1','1','1','0'},
            {'1','1','0','0','0'},
            {'0','0','0','0','0'}
    };
    int num = (new Solution)->numIslands(mm);
    cout<<num<<endl;
    return 0;
}
