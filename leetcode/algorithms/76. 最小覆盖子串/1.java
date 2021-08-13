package com.company;

import java.util.HashMap;

class Solution {
    public String minWindow(String s, String t) {
        HashMap<Character, Integer> need = new HashMap<>(), window = new HashMap<>();
        char[] chars = t.toCharArray();
        for (char c : chars) {
            need.put(c,need.getOrDefault(c,0)+1);
        }

        int left = 0,right = 0;
        //满足条件的个数
        int valid =0;
        // 记录最小覆盖子串的起始索引及长度
        int start = 0,len = Integer.MAX_VALUE;
        // 开始滑动
        while (right<s.length()){
            // c 是将移入窗口的字符
            char c = s.charAt(right);
            // 右移动
            right++;
            // 进行窗口内数据的一系列更新
            if(need.containsKey(c)){
                window.put(c,window.getOrDefault(c,0)+1);
                if(window.get(c).equals(need.get(c))){
                    valid++;
                }
            }
            //判断左侧窗口是否收缩
            while (valid==need.size()){
                // 更新最小覆盖
                if(right-left<len){
                    start = left;
                    len = right-left;
                }
                // d是将要移除的字符
                char d = s.charAt(left);
                // 左移窗口
                left++;
                // 进行窗口内数据的一系列更新
                if(need.containsKey(d)){
                    if(window.get(d).equals(need.get(d))){
                        valid--;
                    }
                    window.put(d,window.getOrDefault(d,0)-1);
                }
            }
        }
        return len==Integer.MAX_VALUE?"":s.substring(start,start+len);
    }

    public static void main(String[] args) {
        String s = new Solution().minWindow("ADOBECODEBANC", "ABC");
        System.out.println(s);
    }
}