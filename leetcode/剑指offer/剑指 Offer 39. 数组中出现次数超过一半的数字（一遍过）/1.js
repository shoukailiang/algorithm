/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    if(nums.length===1) return nums[0];
    let map = new Map();
    for(let i of nums){
        if(map.has(i)){
            map.set(i,map.get(i)+1)
            if(map.get(i)>=nums.length/2){
                return i;
            }
        }else{
            map.set(i,1);
        }
    }
    return -1;
};