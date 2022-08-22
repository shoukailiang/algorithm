#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
    int dp[1010];
public:
    int minCostClimbingStairs(vector<int>& cost) {
        dp[0] = 0;
        dp[1] = 0;
        for(int i =2;i<=cost.size();i++){
            dp[i] = min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[cost.size()];
    }
};
int main() {
    vector<int> matrix = {
            {1, 100, 1, 1, 1, 100, 1, 1, 100, 1}
    };
    cout<<(new Solution)->minCostClimbingStairs(matrix);

    return 0;
}
