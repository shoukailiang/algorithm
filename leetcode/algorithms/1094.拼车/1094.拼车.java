/*
 * @lc app=leetcode.cn id=1094 lang=java
 *
 * [1094] 拼车
 */

// @lc code=start
class Solution {
    class Difference{
        private int[] diff;
        public Difference(int[] nums){
            assert nums.length>0;
            diff = new int[nums.length];
            diff[0] = nums[0];
            for(int i=1;i<nums.length;i++){
                diff[i] = nums[i]-nums[i-1];
            }
        }
        public void increment(int i,int j,int val){
            diff[i]+=val;
            if(j+1<diff.length){
                diff[j+1]-=val;
            }
        }

        public int[] result(){
            int[] res = new int[diff.length];
            res[0] = diff[0];
            for(int i =1;i<diff.length;i++){
                res[i] = res[i-1]+diff[i];
            }
            return res;
        }

    }
    public boolean carPooling(int[][] trips, int capacity) {
        // 最多有1000个车站
        int[] nums = new int[1000+1];
        Difference df = new Difference(nums);
        for(int[] trip:trips){
            int num_passengers = trip[0];
            int start_location = trip[1];
            int end_location = trip[2];
            // end_location 已经下车
            df.increment(start_location, end_location-1, num_passengers);
        }
        int[] res = df.result();

        for(int i=0;i<res.length;i++){
            if(res[i]>capacity){
                return false;
            }
        }
        return true;
    }
}
// @lc code=end

