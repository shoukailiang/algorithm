// 这个会超时
class Solution1 {
    public static void rotate(int[] nums, int k) {
      int prev;
      int temp;
      for (int i = 0; i < k; i++) {
        prev = nums[nums.length-1];
        for (int j = 0; j < nums.length; j++) {
          temp = nums[j];
          nums[j] = prev;
          prev = temp;
        }
      }
    }
  }