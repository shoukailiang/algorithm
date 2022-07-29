class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0;
        int right = n;
        int res;
        while(left<=right){
            long long mid = left+(right-left)/2;
            long long total = (1+mid)*mid/2;
            if(total>n){
                right = mid-1;
            }else if(total<=n){
                left = mid+1;
                res = mid;
            }
        }
        return res;
    }
};