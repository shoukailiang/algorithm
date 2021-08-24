import java.util.*;


public class Solution {
    /**
     * 
     * @param arr int整型一维数组 the array
     * @return int整型
     */
    public int maxLength (int[] arr) {
        // write code here
        if(arr.length==0||arr.length==1) {
            return arr.length;
        }
        HashMap<Integer,Integer> windows = new HashMap<>();
        int res =0,left = 0,right=0;
        while(right<arr.length){
            int c = arr[right];
            right++;
            windows.put(c,windows.getOrDefault(c,0)+1);
            while(windows.get(c)>1){
                int d = arr[left];
                left++;
                windows.put(d,windows.get(d)-1);
            }
            res = Math.max(res,right-left);
        }
        return res;
    }
}