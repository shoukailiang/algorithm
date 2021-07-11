class Solution {
    void reverse(char[] ch,int i,int j){
        while(i<j){
            char temp = ch[i];
            ch[i] = ch[j];
            ch[j] = temp;
            i++;
            j--;
        }

    }
    public String reverseWords(String s) {
        s =s.concat(" ");
        char[] array = s.toCharArray();
        int start =0;
        int end = 0;
        while(end<s.length()){
            while(array[end]!=' '){
                end++;
            }
            reverse(array,start,end-1);
            // start 和end指向同一个位置
            start= end+1;
            end = start;
        }
        String newS = new String (array);
        return newS.substring(0, array.length-1);
    }
}