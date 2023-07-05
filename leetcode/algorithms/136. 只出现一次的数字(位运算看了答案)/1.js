/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    // 0 和任何数字异或都是这个数字本身
    let res = 0;
    for(let i =0;i<nums.length;i++){
        res^=nums[i];
    }
    return res;
};