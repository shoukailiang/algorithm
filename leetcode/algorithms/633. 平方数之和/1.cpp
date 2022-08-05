class Solution {
public:
    bool judgeSquareSum(int c) {
        int left = 0;
        long right = (int)sqrt(c);
        long  total = 0;
        while(left<=right){
            total = left*left+right*right;
            if(total>c){
                right--;
            }else if(total<c){
                left++;
            }else{
                return true;
            }
        }
        return false;
    }
};