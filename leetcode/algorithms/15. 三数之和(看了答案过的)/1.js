/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    let arr = nums.sort((a,b)=>a-b);
    let res = [];
    if(arr[0]>0) return res;
    let len = arr.length;
    let left= 0,right = len-1;
    for(let i =0;i<len;i++){
        left = i+1;
        right = len-1;
        if(i>0&&arr[i]==arr[i-1]) continue;
        while(left<right){
            if(arr[i]+arr[left]+arr[right]>0){
                right--;
            }else if(arr[i]+arr[left]+arr[right]<0){
                left++;
            }else{
                res.push([arr[i],arr[left],arr[right]]);
                while(left<right&&arr[left]==arr[left+1]) left++;
                while(left<right&&arr[right]==arr[right-1]) right--;
                left++;
                right--;
            }
        }
    }
    return res;
};