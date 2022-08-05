#include <iostream>
#include <functional>
#include <bits/stdc++.h>
using namespace std;
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

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int level = 1;
        queue<pair<int,int>> que;
        // 上下左右
        vector<vector<int>> direction{{-1,0},{1,0},{0,-1},{0,1}};
        int m = mat.size(),n = mat[0].size();
        row = m;
        col = n;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(mat[i][j] == 0){
                    que.push({i,j});
                }else {
                    // 将所有的1设置成-1
                    mat[i][j] = -1;
                }
            }
        }

        while(!que.empty()){
            int size = que.size();
            for (int i = 0; i < size; ++i) {
                pair<int,int> curPos = que.front();
                que.pop();
                for (int j = 0; j < 4; ++j) {
                    int newX = curPos.first+direction[j][0];
                    int newY = curPos.second+direction[j][1];
                    if(isRange(newX,newY)&&mat[newX][newY]<0){
                        mat[newX][newY] = level;
                        que.push({newX,newY});
                    }
                }
            }
            level++;
        }

        return mat;
    }
};
int main() {
    vector<vector<int>> num = {{0,0,0},{0,1,0},{1,1,1}};
    vector<vector<int>> res = Solution().updateMatrix(num);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}
