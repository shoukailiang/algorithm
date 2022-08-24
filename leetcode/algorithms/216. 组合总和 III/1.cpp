class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(int targetSum,int k ,int sum,int startIndex){
        if(sum>targetSum){
            return;
        }
        if(path.size()==k){
            if(sum==targetSum){
                result.push_back(path);
                // 如果path.size == k 但是sum!= targetSum
                return;
            }
        }
        for (int i = startIndex; i <=9-(k-path.size())+1 ; ++i) {
            sum+=i;
            path.push_back(i);
            backtracking(targetSum,k,sum,i+1);
            sum-=i;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(n,k,0,1);
        return result;
    }
};