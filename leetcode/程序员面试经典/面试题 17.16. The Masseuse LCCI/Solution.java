class Solution {
    public int massage(final int[] nums) {
      final int len = nums.length;
      final int dp[] = new int[len];
      if (len == 0) {
        return 0;
      } else if (len == 1) {
        return nums[0];
      } else {
        dp[0] = nums[0];
        dp[1] = Math.max(nums[0], nums[1]);
        for (int i = 2; i < len; i++) {
          dp[i] = Math.max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        return dp[len - 1];
      }
    }
    public static void main(final String[] args) {
      final int n[] = new int[] { 1, 2, 3, 1 };
      final Solution solution = new Solution();
      final int massage = solution.massage(n);
        System.out.println(massage);
    }
  }