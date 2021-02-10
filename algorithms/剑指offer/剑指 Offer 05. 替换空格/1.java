class Solution {
  public String replaceSpace(String s) {
      char[] chars = s.toCharArray();
      StringBuffer bu = new StringBuffer();
      for (int i = 0; i < chars.length; i++) {
          if(chars[i]==' '){
              bu.append("%20");
          }else {
              bu.append(chars[i]);
          }
      }
      return bu.toString();
  }
}