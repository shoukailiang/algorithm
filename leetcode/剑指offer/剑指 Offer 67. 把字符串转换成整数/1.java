class Solution {
    public int strToInt(String str) {
        if(str.equals("")){
            return 0;
        }
        char[] ch = str.toCharArray();
        int idx = 0;
        boolean flag = true;
        while(ch[idx]==' '){
            idx++;
            if(idx==str.length()){
                return 0;
            }
        }
        if(ch[idx]=='-'){
            flag = false;
            idx++;
        }else if(ch[idx]=='+'){
            flag = true;
            idx++;
        }else if(idx==str.length()){
            return 0;
        }else if(!Character.isDigit(ch[idx])){
            return 0;
        }
        int cnt = 0;
        while(idx<str.length()&&Character.isDigit(ch[idx])){
            int temp = ch[idx]-'0';
            if(cnt>(Integer.MAX_VALUE-temp)/10){
                return flag ?Integer.MAX_VALUE:Integer.MIN_VALUE;
            }
            cnt = cnt*10+temp;
            idx++;
        }
        return flag?cnt:-1*cnt;
    }
}