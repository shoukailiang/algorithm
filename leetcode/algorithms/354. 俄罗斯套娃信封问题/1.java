package com.company;

import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;

class Solution {

    int lenthOfLIS(int[] nums){
        int[] dp = new int[nums.length];
        Arrays.fill(dp,1);
        for (int i = 0; i < nums.length; i++) {
            for (int j = 0; j < i; j++) {
                if(nums[i]>nums[j]){
                    dp[i] = Math.max(dp[i],dp[j]+1);
                }
            }
        }
        int res = 0;
        for (int i = 0; i < dp.length; i++) {
            res = Math.max(res,dp[i]);
        }
        return res;
    }
    public int maxEnvelopes(int[][] envelopes) {
        int n = envelopes.length;
        Arrays.sort(envelopes, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                return a[0]==b[0]?b[1]-a[1]:a[0]-b[0];
            }
        });
        // 高度数组寻找LIS
        int[] height = new int[n];
        for (int i = 0; i < n; i++) {
            height[i] = envelopes[i][1];
        }
        System.out.println(Arrays.toString(height));
        return lenthOfLIS(height);
    }

    public static void main(String[] args) {
        int intA[][]={{5,4},{6,4},{6,7},{2,3}};
        int i = new Solution().maxEnvelopes(intA);
        System.out.println(i);
    }


}