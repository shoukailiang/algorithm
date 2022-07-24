#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startx =0,starty = 0;
        int offset = 1;
        int size = n/2;
        int count = 1;
        vector<vector<int>> res(n,vector<int>(n,0));
        int i,j;
        while(size--){
            i = startx;
            j = starty;
            for ( j = starty; j <n-offset ; ++j) {
                res[startx][j] = count++;
            }
            for ( i = startx; i <n-offset ; ++i) {
                res[i][j] = count++;
            }
            for (  ; j >starty ; --j) {
                res[i][j] = count++;
            }
            for (  ; i >startx ; --i) {
                res[i][j] = count++;
            }
            startx++;
            starty++;
            offset++;
        }
        // 如果是奇数，中间那个元素
        if(n%2){
            res[n/2][n/2] = count;
        }
        return res;
    }
};


int main() {
    vector<vector<int>> res=  Solution().generateMatrix(4);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout<<res[i][j]<<" ";
        }
    }
   return 0;
}
