class Solution {
  public String longestCommonPrefix(String[] strs) {
      int cnt = strs.length;
      if(strs==null||cnt==0){
          return "";
      }
      if(cnt==1){
          return strs[0];
      }
      int len = strs[0].length();
      for (int i = 0; i < len; i++) {
          char c= strs[0].charAt(i);
          for (int j = 1; j < cnt; j++) {
              if (strs[j].length()==i||strs[j].charAt(i)!=c) {
                  return strs[0].substring(0,i);
              }
          }
      }
      return strs[0];
  }

  public static void main(String[] args) {
      String[] str = new String[]{"","","",""};
      String s = new Solution().longestCommonPrefix(str);
      System.out.println(s);
  }
}