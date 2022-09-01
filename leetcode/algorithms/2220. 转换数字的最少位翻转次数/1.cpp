class Solution {
private:
    int countOne(int n){
        int ans = 0;
        while(n){
            n  = n&(n-1);
            ans++;
        }
        return ans;
    }
public:
    int minBitFlips(int start, int goal) {
        return countOne(start^goal);
    }
};