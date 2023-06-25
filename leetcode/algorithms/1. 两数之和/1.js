/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = new Map();
    for(let i =0;i<nums.length;i++){
        let supply = target-nums[i];
        if(map.has(supply)){
            return [i,map.get(supply)];
        }else{
            map.set(nums[i],i);
        }
    }
    return [-1,-1];
};