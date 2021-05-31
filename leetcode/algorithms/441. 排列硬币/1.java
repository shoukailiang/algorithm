// 暴力
class Solution {
    public int arrangeCoins(int n) {
        int i=1;
        while(i<=n){
            n = n-i;
            i++;
            if(n<i){
                return i-1;
            }
        }
        return 0;
    }
}