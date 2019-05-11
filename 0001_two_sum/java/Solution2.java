// HashMap
// Time Complexity: O(n)
import java.util.HashMap;

class Solution2 {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int temp =target-nums[i];
            if(map.containsKey(temp)){  // 返回布尔
                return new int []{map.get(temp),i};
            }
            map.put(nums[i],i);   // key value
        }
        throw new IllegalStateException("the input has no solution");
    }
  // 测试使用--------------------------------
  public static void main(String[] args) {
    int[] nums = {2, 7, 3, 0};
    int target = 9;
    printArr((new Solution2()).twoSum(nums, target));
  }
  private static void printArr(int[] nums){
      for(int num: nums)
          System.out.print(num + " ");
      System.out.println();
  }
  // 测试使用--------------------------------
}