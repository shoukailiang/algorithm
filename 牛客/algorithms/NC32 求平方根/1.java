import java.util.*;


public class Solution {
    /**
     * 
     * @param x int整型 
     * @return int整型
     */
    public int sqrt (int x) {
        // write code here
        long l =0;
        long r =x ;
        long ret = -1;
        while(l<=r){
            long mid = l+(r-l)/2;
            if(mid*mid<=x){
                l =mid+1;
                ret = mid;
            }else{
                r = mid-1;
            }
        }
        return (int)ret;
    }
}