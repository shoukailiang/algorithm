/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let arr = s.trim().split(" ");
    let res = [];
    for(let i =arr.length-1;i>=0;i--){
        if(arr[i]=="") continue;
        res.push(arr[i]);
        if(i>0){
            res.push(" ");
        }
    }
    return res.join("");
};