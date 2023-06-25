/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let arr = s.trim().split(" ");
    let str = "";
    for(let i =arr.length-1;i>=0;i--){
        if(arr[i]=="") continue;
        str+=arr[i];
        if(i!=0){
            str+=" "
        }
    }
    return str;
};