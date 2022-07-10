#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size());
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < cost.size(); ++i) {
            dp[i] = min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};
int main() {
    vector<int> matrix = {
            {1, 100, 1, 1, 1, 100, 1, 1, 100, 1}
    };
    cout<<(new Solution)->minCostClimbingStairs(matrix);

    return 0;
}
