class Solution {
public:
    int minCount(vector<int>& coins) {
        int res = 0;
        for(int i = 0;i<coins.size();i++){
            res+=(coins[i]+1)/2;
        }
        return res;
    }
};