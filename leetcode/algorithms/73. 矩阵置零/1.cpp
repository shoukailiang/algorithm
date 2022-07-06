#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row;
        unordered_set<int> col;
        for(int i=0;i<matrix.size();i++){
            for (int j = 0; j < matrix[i].size(); ++j) {
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                if(row.count(i)){
                    matrix[i][j]=0;
                }
            }
        }
        for (int i = 0; i < matrix[0].size(); ++i) {
            for (int j = 0; j < matrix.size(); ++j) {
                if(col.count(i)){
                    matrix[j][i] =0;
                }
            }
        }
    }
};
int main() {
    vector<vector<int>> m = {
            {0,1,2,0},
            {3,4,5,2},
            {1,3,1,5}
    };
    (new Solution)->setZeroes(m);
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
