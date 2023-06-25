class Solution {
    public int removeElement(int[] nums, int val) {
        int len = nums.length;
        int left = 0;
        for(int right = 0;right<len;right++){
            if(nums[right]!=val){
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
}