class Solution {
public:
    int numberOfMatches(int n) {
        if(n==1){
            return 0;
        }
        // n 为奇数
        if(n&1){
            return numberOfMatches((n-1)/2+1)+(n-1)/2;
        }
        return numberOfMatches(n/2)+n/2;
    }
};