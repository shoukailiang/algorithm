#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        auto temp = matrix;
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix.size(); ++j) {
                temp[j][n-i-1] = matrix[i][j];
            }
        }
        matrix = temp;
    }
};
int main() {
    vector<vector<int>> he = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    (new Solution())->rotate(he);

    for (int i = 0; i < he.size(); ++i) {
        for (int j = 0; j < he.size(); ++j) {
            cout<<he[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
