class Solution {
private:
    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int> &candidates, int target, int sum, int startIndex) {
        if(sum>target){
            return;
        }
        if(sum==target){
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i < candidates.size()&&sum+candidates[i]<=target; ++i) {
            sum+=candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates, target, sum, i); // 不用i+1了，表示可以重复读取当前的数
            sum -= candidates[i];
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        result.clear();
        path.clear();
        sort(candidates.begin(),candidates.end());
        backtracking(candidates, target, 0, 0);
        return result;
    }
};