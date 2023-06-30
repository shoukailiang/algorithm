
/**
 * @param {number} n
 * @return {boolean}
 */

var getSum = function(n){
    let cur = n;
    let sum = 0;
    while(cur){
        let a = cur%10;
        cur = Math.floor(cur/10);
        sum+= a*a;
    }
    return sum;
}
var isHappy = function(n) {
    let s = new Set();
    while(n!==1&&!s.has(n)){
        s.add(n);
        n = getSum(n);
    }
    return n===1;
};