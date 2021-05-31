class Solution {
    public int pivotIndex(int[] nums) {
        int sum = Arrays.stream(nums).sum();
        int total = 0 ;
        for(int i=0;i<nums.length;i++){
            total+=nums[i];
            if(total==sum){
                return i;
            }
            sum-=nums[i];
        }
        return -1;
    }
}