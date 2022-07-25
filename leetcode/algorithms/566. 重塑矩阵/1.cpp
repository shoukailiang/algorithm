#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result (r,vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        for (int i = 0; i < m * n; ++i) {
            result[i/c][i%c]  = mat[i/n][i%n] ;
        }
        return result;
    }
};


int main() {
    vector<vector<int>> arr ={{1,2},{3,4}};
    vector<vector<int>> res = Solution().matrixReshape(arr,2,2);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
   return 0;
}
