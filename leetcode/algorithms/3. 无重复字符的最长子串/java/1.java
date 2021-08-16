package com.company;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> window = new HashMap<>();
        int left =0,right = 0;
        int res = 0;// 返回结果
        while (right<s.length()){
            char c = s.charAt(right);
            right++;
            window.put(c,window.getOrDefault(c,0)+1);
            // 判断左侧是否收缩
            while (window.get(c)>1){
                char d = s.charAt(left);
                left++;
                window.put(d,window.get(d)-1);
            }
            res = Math.max(res,right-left);
        }
        return res;
    }

    public static void main(String[] args) {
        int abcabcbb = new Solution().lengthOfLongestSubstring("abcabcbb");
        System.out.println(abcabcbb);
    }
}