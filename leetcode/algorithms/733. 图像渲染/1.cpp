#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
private:
    void dfs(vector<vector<int>> &image,int sr,int sc,int oldColor,int newColor){
        if(sc<0||sr<0||sr>image.size()-1||sc>image[0].size()-1){
            return ;
        }
        if(image[sr][sc]!=oldColor||image[sr][sc]==newColor){
            return;
        }
        image[sr][sc] = newColor;
        dfs(image,sr-1,sc,oldColor,newColor);
        dfs(image,sr,sc+1,oldColor,newColor);
        dfs(image,sr+1,sc,oldColor,newColor);
        dfs(image,sr,sc-1,oldColor,newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        dfs(image,sr,sc,oldColor,color);
        return image;
    }
};
int main() {
    vector<vector<int>> m = {
            {1,1,1},
            {1,1,0},
            {1,0,1}
    };
    vector<vector<int>> new_arr = (new Solution)->floodFill(m,1,1,2);
    for (int i = 0; i < new_arr.size(); ++i) {
        for (int j = 0; j < new_arr[i].size(); ++j) {
            cout<<new_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
