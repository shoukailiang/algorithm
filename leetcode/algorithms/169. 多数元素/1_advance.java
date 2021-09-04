class Solution {
  public int majorityElement(int[] nums) {
     if(nums==null||nums.length==0){
         return -1;
     }
     int condidate = 0;
     int restHP = 0;
     for(int num:nums){
         if(restHP==0){
             condidate = num;
             restHP=1;
         }else if(num!=condidate){
             restHP--;
         }else{
             restHP++;
         }
     }
     if(restHP==0){
         return -1;
     }

     int count = 0;
     for(int num:nums){
         if(num==condidate){
             count++;
         }
     }
     if(count>nums.length>>1){
         return condidate;
     }
     return -1;

  }
}