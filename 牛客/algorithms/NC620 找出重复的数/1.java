import java.util.*;


public class Solution {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param n int 
     * @param a int一维数组 
     * @return int
     */
    public int search (int n, int[] a) {
        // write code here
        HashSet<Integer> set = new HashSet<>();
        for(int i =0;i<=n;i++){
            if(!set.contains(a[i])){
                set.add(a[i]);
            }else{
                return a[i];
            }
        }
        return -1;
    }
}