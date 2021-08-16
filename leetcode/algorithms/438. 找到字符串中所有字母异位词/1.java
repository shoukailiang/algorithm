package com.company;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

class Solution {
    public List<Integer> findAnagrams(String s, String t) {
        HashMap<Character, Integer> need = new HashMap<>(),window = new HashMap<>();
        char[] chars = t.toCharArray();
        for (char c : chars) {
            need.put(c,need.getOrDefault(c,0)+1);
        }
        int left = 0,right = 0;
        int valid = 0;
        ArrayList<Integer> res = new ArrayList<>();
        while (right<s.length()){
            char c = s.charAt(right);
            right++;
            // 对窗口内的数据做一系列的更新
            if(need.containsKey(c)){
                window.put(c,window.getOrDefault(c,0)+1);
                if(window.get(c).equals(need.get(c))){
                    valid++;
                }
            }
            // 判断左侧窗口是否收缩
            while (right-left>=t.length()){
                if(valid==need.size()){
                    res.add(left);
                }
                char d = s.charAt(left);
                left++;
                if(need.containsKey(d)){
                    if(window.get(d).equals(need.get(d))){
                        valid--;
                    }
                    window.put(d,window.get(d)-1);
                }
            }
        }
        return res;
    }

    public static void main(String[] args) {
        List<Integer> anagrams = new Solution().findAnagrams("abab", "ab");
        System.out.println(anagrams);
    }
}