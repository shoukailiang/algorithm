class Solution {
  List<List<Integer>> twoSum(int[] nums,int start,int target){
      int lo = start;
      int hi = nums.length-1;
      List<List<Integer>> res = new ArrayList<>();
      while(lo<hi){
          List<Integer> temp = new ArrayList<>();
          int sum = nums[lo] + nums[hi];
          int left = nums[lo], right = nums[hi];
          if (sum < target) {
              while (lo < hi && nums[lo] == left) {
                  lo++;
              }
          } else if (sum > target) {
              while (lo < hi && nums[hi] == right) {
                  hi--;
              }
          } else {
              temp.add(left);
              temp.add(right);
              res.add(temp);
              while (lo < hi && nums[lo] == left) {
                  lo++;
              }
              while (lo < hi && nums[hi] == right) {
                  hi--;
              }
          }
      }
      return res;
  }
  public List<List<Integer>> threeSum(int[] nums) {
      List<List<Integer>> res = new ArrayList<>();
      if(nums.length==0){
          return res;
      }
      if(nums.length<3){
          return res;
      }
      Arrays.sort(nums);
      int target = 0;
      for(int i=0;i<nums.length;i++){
          List<List<Integer>> tuple = twoSum(nums,i+1,target-nums[i]);
          for (List<Integer> tu : tuple) {
              tu.add(nums[i]);
              res.add(tu);
          }
          // 跳过重服
          while(i<nums.length-1&&nums[i]==nums[i+1]){
              i++;
          }
      }
      return res;
  }
}