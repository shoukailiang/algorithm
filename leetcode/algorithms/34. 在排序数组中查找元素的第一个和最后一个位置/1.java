class Solution {
  int left_binary_search(int[] nums, int target){
      int left = 0,right = nums.length-1;
      while (left<=right){
          int mid = left+(right-left)/2;
          if(nums[mid]<target){
              left = mid+1;
          }else if(nums[mid]>target){
              right = mid -1;
          }else if(nums[mid]==target){
              right = mid -1;
          }
      }
      // 检查是否越界
      if(left>=nums.length||nums[left]!=target){
          return -1;
      }
      return left;
  }

  int right_binary_search(int[] nums, int target){
      int left = 0,right = nums.length-1;
      while (left<=right){
          int mid = left+(right-left)/2;
          if(nums[mid]<target){
              left = mid+1;
          }else if(nums[mid]>target){
              right = mid -1;
          }else if(nums[mid]==target){
              left = mid +1;
          }
      }
      // 检查是否越界
      if(right<0||nums[right]!=target){
          return -1;
      }
      return right;
  }
  public int[] searchRange(int[] nums, int target) {
      int left = left_binary_search(nums,target);
      int right = right_binary_search(nums,target);
      if(left!=-1&&right!=-1){
          return new int[]{left,right};
      }
      return new int[]{-1,-1};
  }
}