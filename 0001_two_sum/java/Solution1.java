// Brute Force
// Time Complexity: O(n²)
class Solution1 {
  public int[] twoSum(int[] nums, int target) {
    for(int i = 0 ; i < nums.length; i ++){
      for(int j = 0 ; j < nums.length ; j ++){
        if(nums[i] + nums[j] == target){
          int[] res = {i, j};
          return res;
        }
      }
    }
    throw new IllegalStateException("the input has no solution");
}
  // 测试使用--------------------------------
  public static void main(String[] args) {
      int[] nums = {2, 7, 3, 0};
      int target = 9;
      printArr((new Solution1()).twoSum(nums, target));
  }
  private static void printArr(int[] nums){
      for(int num: nums)
          System.out.print(num + " ");
      System.out.println();
  }
  // 测试使用--------------------------------
}