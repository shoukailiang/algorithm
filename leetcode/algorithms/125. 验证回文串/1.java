class Solution {
  public boolean isPalindrome(String s) {
      StringBuffer s1 = new StringBuffer();
      for (int i = 0; i < s.length(); i++) {
          char c = s.charAt(i);
          boolean letterOrDigit = Character.isLetterOrDigit(c);
          if(letterOrDigit) {
              s1.append(Character.toLowerCase(c));
          }
      }
      StringBuffer re = new StringBuffer(s1).reverse();
      boolean equals = s1.toString().equals(re.toString());
      return equals;
  }
}