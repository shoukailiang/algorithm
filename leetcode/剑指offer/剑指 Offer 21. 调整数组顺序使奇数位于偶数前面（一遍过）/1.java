class Solution {
  public int[] exchange(int[] nums) {
      int len = nums.length;
      if(len==0||len==1){
          return nums;
      }
      int slow = 0,fast = len-1;
      while(slow<=fast){
          while(slow < len && nums[slow]%2==1){
              slow++;
          }
          while(fast>=0&&nums[fast]%2==0){
              fast--;
          }
          if(slow<=fast){
              int temp = nums[slow];
              nums[slow] = nums[fast];
              nums[fast] = temp;
              slow++;
              fast--;
          }
      }
      return nums;
  }

  public static void main(String[] args) {
      int[] exchange = new Solution().exchange(new int[]{1, 3, 5});
      System.out.println(Arrays.toString(exchange));
  }
}