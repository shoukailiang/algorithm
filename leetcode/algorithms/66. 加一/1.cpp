class Solution {
    public int[] plusOne(int[] digits) {
        if(digits==null||digits.length==0){
                return digits;
            }
            int carry = 1;
            for (int i = digits.length-1; i >=0 ; i--) {
                int val = digits[i] +carry;
                digits[i] =val%10;
                carry = val/10;
            }
            int[] arr = new int[digits.length+1];
            if(carry==1){
                arr[0] = 1;
                for (int i = 1; i <arr.length ; i++) {
                    arr[i] = digits[i-1];
                }
                return arr;
            }else {
                return digits;
            }
    }
}