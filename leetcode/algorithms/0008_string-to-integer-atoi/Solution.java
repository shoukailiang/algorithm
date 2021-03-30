class Solution {
  public int myAtoi(String str) {
      char[] chars = str.toCharArray();
      int i= 0;
      boolean flag = false;
      while (i<str.length()&&chars[i]==' '){
          i++;
      }
      if(i==str.length()){
          return 0;
      }
      if(chars[i] == '-'){
          flag = true;
          i++;
      }else if(chars[i]=='+'){
          i++;
      }else if(!Character.isDigit(chars[i])){
          return 0;
      }
      int num = 0;
      while (i<str.length()&&Character.isDigit(chars[i])){
          int temp = chars[i]-'0';
          if(num>(Integer.MAX_VALUE-temp)/10){
              return flag? Integer.MIN_VALUE:Integer.MAX_VALUE;
          }
          num=num*10+temp;
          i++;
      }
      return flag?-1*num:num;
  }
}