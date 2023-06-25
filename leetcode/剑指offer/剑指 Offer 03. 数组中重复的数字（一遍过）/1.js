/**
 * @param {number[]} nums
 * @return {number}
 */
var findRepeatNumber = function(nums) {
    let m = new Map();
    for(let n of nums){
        if(m.has(n)){
            return n;
        }else{
            m.set(n,1);
        }
    }
};