/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
    let map1 = new Map();
    let map2 = new Map();
    for(let num of nums1){
        map1.set(num,map1.has(num)?map1.get(num)+1:1);
    }
    for(let num of nums2){
        map2.set(num,map2.has(num)?map2.get(num)+1:1);
    }
    let res = [];
    for(let [key,value] of map1){
        if(map2.has(key)){
            let count = Math.min(map2.get(key),value);
            while(count--){
                res.push(key);
            }
        }
    }
    return res;
};