/**
 * @param {string} str
 * @return {number}
 */
var strToInt = function(str) {
    let s = str.trim();
    let pattern = /^(\-|\+)?[0-9]+/;
    let arr = pattern.exec(s);
    let sum = 0;
    if(arr){
        sum = Number(arr[0]);
        if(sum>Math.pow(2,31)-1){
            sum = Math.pow(2,31)-1;
        }
        if(sum<Math.pow(-2,31)){
            sum = Math.pow(-2,31);
        }
    }
    return sum;
};
 // js 默认Number最大值为Math.pow(2,53)-1，最小值为Math.pow(-2,53)