class Solution {
  public int majorityElement(int[] nums) {
      HashMap<Integer, Integer> maps = new HashMap<>();
      for (int i = 0; i < nums.length; i++) {
          maps.put(nums[i],maps.getOrDefault(nums[i],0)+1);
      }
      for (int i = 0; i < nums.length; i++) {
          if(maps.get(nums[i])>nums.length>>1){
              return nums[i];
          }
      }
      return -1;
  }
}