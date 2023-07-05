/**
 * @param {number[]} a
 * @return {number[]}
 */
var constructArr = function(a) {
    let left = [];
    let right = [];
    let count = 1;
    for(let i =0;i<a.length;i++){
        left[i] = count;
        count*=a[i];
    }
    count = 1;
    for(let i =a.length-1;i>=0;i--){
        right[i] = left[i]*count;
        count*=a[i];
    }
    return right;
};