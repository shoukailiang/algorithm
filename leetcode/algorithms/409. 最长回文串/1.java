class Solution {
  public int longestPalindrome(String s) {
      if(s.length()==0){
          return 0;
      }
      HashSet<Character> hashset = new HashSet<Character>();
      char[] ch = s.toCharArray();
      int cnt = 0;
      for(char c:ch){
          if(!hashset.contains(c)){
              hashset.add(c);
          }else{
              hashset.remove(c);
              cnt++;
          }
      }
      return hashset.isEmpty()?cnt*2:cnt*2+1;
  }
}