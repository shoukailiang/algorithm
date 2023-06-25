/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let len = nums.length;
    let sum = (0+len)*(len+1)/2;
    let newSum = 0;
    for(let i =0;i<nums.length;i++){
        newSum+=nums[i];
    }
    return sum-newSum;
};