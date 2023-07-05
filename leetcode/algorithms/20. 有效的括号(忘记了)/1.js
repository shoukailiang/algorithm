/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let stack = []
    for(let i of s){
        switch(i){
            case '(':
                stack.push(')');
            break;
            case '[':
                stack.push(']');
            break;
            case '{':
                stack.push('}');
            break;
            default:
                if(i!==stack.pop()){
                    return false;
                }
        }
    }
    return stack.length===0;
};