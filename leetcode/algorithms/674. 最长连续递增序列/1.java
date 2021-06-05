class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int max = 1;
        int start = 0;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>nums[i-1]){
                max = Math.max(max,i-start+1);
            }else{
                // [1,1,1]
                 start = i;
            }
            
        }
        return max;
    }
}