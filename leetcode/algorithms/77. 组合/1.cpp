#include <iostream>
#include <functional>
#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(int n,int k,int startIndex){
        if(path.size()==k){
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i <=n ; ++i) {
            path.push_back(i);
            backtracking(n,k,i+1);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        backtracking(n,k,1);
        return result;
    }
};
int main() {
    vector<vector<int>> res = Solution().combine(4,2);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item;
        }
        cout<<endl;
    }
    return 0;
}
