// 二分
class Solution {
    public int arrangeCoins(int n) {
       int low= 0;
       int high = n;
       while(low<=high){
           int mid = (high-low)/2+low;
           int total = mid*(mid+1)/2;
           if(total==n){
               return mid;
           }else if(total>n){
               high = mid-1;
           }else{
               low = mid+1;
           }
       }
       // 没找到的情况下
        return high;
    }
   
}