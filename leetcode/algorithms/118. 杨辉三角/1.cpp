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
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; ++i) {
            vector<int> temp(i+1);
            temp[0] = temp[temp.size()-1] = 1;
            // i =2
            if(i>1){
                for (int j = 1; j < temp.size()-1; ++j) {
                    temp[j] = result[i-1][j]+result[i-1][j-1];
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};


int main() {
    vector<vector<int>> res = Solution().generate(4);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
   return 0;
}
