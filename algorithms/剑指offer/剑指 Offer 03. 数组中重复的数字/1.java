class Solution {
  public int findRepeatNumber(int[] nums) {
      Map<Integer,Boolean> maps = new HashMap<>();
      for(int num:nums){
          if(maps.containsKey(num)){
              return num;
          }
          maps.put(num,true);
      }
      return -1;
  }
}