// 二分
class Solution {
    public int mySqrt(int x) {
        long  l = 0,r = x;
        long ret = -1;
        long mid = 0;
        while(l<=r){
            mid = l+(r-l)/2;
            if(mid*mid<=x){
                ret = mid;
                l=mid+1;
            }else {
                r = mid -1;
            }
        }
        return (int)ret;
    }
}