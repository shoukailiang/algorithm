class Solution {
    public void reverseString(char[] s) {
        int len = s.length;
        int mid = len/2;
        int i = 0;
        while(i<mid){
            char temp = s[i];
            s[i] = s[len-i-1];
            s[len-i-1] = temp;
            i++;
        }
    }
}