#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int memo[n+1] ;
        if(n==1||n==2){
            return n;
        }
        memo[1] = 1;
        memo[2] = 2;

        for(int i=3;i<=n;i++){
            memo[i] = memo[i-1]+memo[i-2];
        }
        return memo[n];
    }
};
int main() {
    int num = (new Solution)->climbStairs(2);
    cout<<num<<endl;
    return 0;
}
