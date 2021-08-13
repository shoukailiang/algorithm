import java.util.*;


public class Solution {
    /**
     * 
     * @param numbers int整型一维数组 
     * @param target int整型 
     * @return int整型一维数组
     */
       public int[] twoSum (int[] numbers, int target) {
            int a[] = new int[2];
            for (int i = 0; i < numbers.length-1; i++) {
                for (int j = i+1; j < numbers.length; j++) {
                    if(numbers[i]+numbers[j]==target){
                        a[0] = i+1;
                        a[1] = j+1;
                        return a;
                    }
                }
            }
            return a;
        }
}