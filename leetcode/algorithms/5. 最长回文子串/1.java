class Solution {
  String palindrome(String s,int l,int r){
      // 防止索引越界
      while(l>=0&&r<s.length()&&s.charAt(l)==s.charAt(r)){
          // 向两边展开
          l--;
          r++;
      }
      // 返回以s[l]和s[r]为中心的最长回文串
      return s.substring(l+1,r);
  }
  public String longestPalindrome(String s) {
      String res = "";
      for(int i=0;i<s.length();i++){
          // 以s[i]为中心的最长回文子串
          String s1 = palindrome(s,i,i);
          // 以s[i] 和 s[i+1] 为中心的最长回文子串
          String s2 = palindrome(s,i,i+1);
          res = res.length()>s1.length()?res:s1;
          res = res.length()>s2.length()?res:s2;
      }
      return res;
      
  }
}