/**
 * 我们可以用一个额外的数组来将每个元素放到正确的位置上，也就是原本数组里下标为 i 的我们把它放到 (i+k)\%数组长度 的位置。然后把新的数组拷贝到原数组中。
 */

class Solution2 {
	public static void rotate(int[] nums, int k) {
     int newArr[] = new int[nums.length];
     for (int i = 0; i < nums.length; i++) {
       newArr[(i+k)%nums.length] = nums[i];
     }
     for (int i = 0; i < nums.length; i++) {
       nums[i] = newArr[i];
     }
   }
 }