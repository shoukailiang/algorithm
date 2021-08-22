import java.util.*;


public class Solution {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 如果目标值存在返回下标，否则返回 -1
     * @param nums int整型一维数组 
     * @param target int整型 
     * @return int整型
     */
    public int search (int[] nums, int target) {
        // write code here
        int len = nums.length;
        int left = 0;
        int right = len -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                right = mid -1;
            }else if(nums[mid]>target){
                right = mid -1;
            }else {
                // <
                left = mid +1;
            }
        }
        if(left<=len-1&&nums[left]==target){
            return left;
        }else{
            return -1;
        }
    }
}