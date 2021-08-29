import java.util.*;


public class Solution {
    /**
     * max sum of the subarray
     * @param arr int整型一维数组 the array
     * @return int整型
     */
    public int maxsumofSubarray (int[] arr) {
        // write code here
        int n = arr.length;
        if(n==0){
            return 0;
        }
        int[] dp = new int[n];
        dp[0] = arr[0];
        for(int i=1;i<n;i++){
            dp[i] = Math.max(dp[i-1]+arr[i],arr[i]);
        }
        int res = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            res = Math.max(res,dp[i]);
        }
        return res;
    }
}