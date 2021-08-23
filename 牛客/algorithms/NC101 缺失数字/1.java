import java.util.*;


public class Solution {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 找缺失数字
     * @param a int整型一维数组 给定的数字串
     * @return int整型
     */
    public int solve (int[] a) {
        // write code here
        int n = a.length;
        int sum = (n+1)*n/2;
        for(int i=0;i<n;i++){
            sum-=a[i];
        }
        return sum;
    }
}