class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxNum = -1;
        for(int i=0;i<accounts.size();i++){
            int num = 0;
            for(int j=0;j<accounts[i].size();j++){
                num+=accounts[i][j];
            }
            maxNum = max(maxNum,num);
        }
        return maxNum;
    }
};