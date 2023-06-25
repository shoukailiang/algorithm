/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let m = new Map();
    for(let n of nums){
        if(!m.has(n)){
            m.set(n,1);
        }else{
            m.set(n,m.get(n)+1);
        }
    }
    return m.get(target)?m.get(target):0;
};