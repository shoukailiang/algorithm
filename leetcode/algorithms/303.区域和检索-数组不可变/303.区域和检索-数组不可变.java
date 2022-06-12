/*
 * @lc app=leetcode.cn id=303 lang=java
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
    private int[] array;

    public NumArray(int[] nums) {
        array = new int[nums.length+1];
        for(int i=1;i<array.length;i++){
            array[i] = array[i-1] + nums[i-1];
        }
    }
    
    public int sumRange(int left, int right) {
        return array[right+1] - array[left];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */
// @lc code=end

