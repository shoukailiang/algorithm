/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    var searchLeft = function(nums,target){
        let left = 0;
        let right = nums.length-1;
        let leftBound = -2;

        while(left<=right){
            let mid = Math.floor((left+right)/2);
            if(nums[mid]>=target){
                right = mid-1;
                leftBound = right;
            }else{
                left = mid+1;
            }
        }
        return leftBound;
    }

    var searchRight = function(nums,target){
        let left = 0;
        let right = nums.length-1;
        let rightBound = -2;

        while(left<=right){
            let mid = Math.floor((left+right)/2);
            if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
                rightBound = left;
            }
        }
        return rightBound;
    }
    let left1 = searchLeft(nums,target);
    let right1 = searchRight(nums,target);
    if(left1===-2||right1===-2) return [-1,-1];
    if(right1-left1>1){
        return[left1+1,right1-1];
    }
    return [-1,-1];
};