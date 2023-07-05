/**
 * @param {string} s
 * @return {string}
 */
var removeDuplicates = function(s) {
    let stack = [];
    for(let i of s){
        if(stack[stack.length-1]==i){
            stack.pop();
            continue;
        }else{
            stack.push(i);          
        }
    }
    return stack.join("");
};