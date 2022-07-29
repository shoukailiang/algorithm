class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        long long  mid;
        int result ;
        while(l<=r){
            mid = l+(r-l)/2;
            if(mid*mid<=x){
                l = mid+1;
                result = mid;
            }else if(mid*mid>x){
                r = mid-1;
            }
        }
        return result;
    }
};