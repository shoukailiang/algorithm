/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let left = 0;
    let right = nums.length-1;
    while(left<=right){
        if(nums[left]+nums[right]<target){
            left++;
        }else if(nums[left]+nums[right]>target){
            right--;
        }else{
            return [nums[left],nums[right]];
        }
    }
};