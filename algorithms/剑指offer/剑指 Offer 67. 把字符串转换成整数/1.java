class Solution {
    public int strToInt(String str) {
        if(str.equals("")){
            return 0;
        }
        char[] chars = str.toCharArray();
        boolean flag =false;
        int index= 0;
        while (chars[index]==' '){
            index++;
            if(index==str.length()){
                return 0;
            }
        }
        if (chars[index]=='-'){
            flag = true;
            index++;
        }else if(chars[index]=='+'){
            index++;
        }
        if(index==str.length()){
            return 0;
        }
        if(!Character.isDigit(chars[index])){
            return 0;
        }
        int total =0;
        while (index<str.length()&&Character.isDigit(chars[index])){
            if (total>(Integer.MAX_VALUE-(chars[index]-'0'))/10){
                return flag?Integer.MIN_VALUE:Integer.MAX_VALUE;
            }else {
                total=total*10+(chars[index]-'0');
            }
            index++;
        }
        return flag?total*-1:total;
    }
}