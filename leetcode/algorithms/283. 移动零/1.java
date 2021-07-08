// 双指针
class Solution {
    public void swap(int nums[],int left,int right){
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
    }
    public void moveZeroes(int[] nums) {
        int left =0;
        int right = 0;
        int n = nums.length;
        while(right<n){
            if(nums[right]!=0){
                swap(nums,left,right);
                left++;
            }
            right++;
        }
    }
}