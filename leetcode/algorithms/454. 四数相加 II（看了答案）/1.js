/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @param {number[]} nums3
 * @param {number[]} nums4
 * @return {number}
 */
var fourSumCount = function(nums1, nums2, nums3, nums4) {
    let twoMap = new Map();
    for(let n1 of nums1){
        for(let n2 of nums2){
            let n = n1+n2;
            twoMap.set(n,twoMap.has(n)?twoMap.get(n)+1:1);
        }
    }
    let count = 0;
    for(let n3 of nums3){
        for(let n4 of nums4){
            let n = n3+n4;
            count+=(twoMap.get(0-n)||0);
        }
    }
    return count;
};