#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
public:
    void backtracking(vector<int> &nums, vector<bool> &used) {
        if(nums.size()==path.size()){
            result.push_back(path);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if(used[i]) {
                continue;
            }
            used[i] = true;
            path.push_back(nums[i]);
            backtracking(nums,used);
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        backtracking(nums,used);
        return result;
    }
};
int main() {
    vector<int> num = {1,2,3};
    vector<vector<int>> res = Solution().permute(num);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item;
        }
        cout<<endl;
    }
    return 0;
}
