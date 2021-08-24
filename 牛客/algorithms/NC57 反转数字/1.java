import java.util.*;


public class Solution {
    /**
     * 
     * @param x int整型 
     * @return int整型
     */
    public int reverse (int x) {
        // write code here
        long sum = 0;
        long t = x;
        while(t!=0){
            sum = t%10+sum*10;
            t/=10;
        }
        if(sum<Integer.MIN_VALUE||sum>Integer.MAX_VALUE){
            return 0;
        }
        return (int)sum;
    }
}