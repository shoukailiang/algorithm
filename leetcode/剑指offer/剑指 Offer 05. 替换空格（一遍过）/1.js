/**
 * @param {string} s
 * @return {string}
 */
var replaceSpace = function(s) {
    let res = "";
    for(let i of s){
        if(i===" "){
            res+="%20";
        }else{
            res+=i;
        }
    }
    return res;
};