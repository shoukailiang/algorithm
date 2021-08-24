import java.util.*;

public class Solution {
    String palindrome(String s,int l,int r){
        while(l>=0&&r<=s.length()-1&&s.charAt(l)==s.charAt(r)){
            l--;
            r++;
        }
        return s.substring(l+1,r);
    }
    public int getLongestPalindrome(String A, int n) {
        // write code here
        String res = "";
        for(int i=0;i<n;i++){
            String s1 = palindrome(A,i,i);
            String s2 = palindrome(A,i,i+1);
            res = res.length()>s1.length()?res:s1;
            res = res.length()>s2.length()?res:s2;
        }
        return res.length();
    }
}