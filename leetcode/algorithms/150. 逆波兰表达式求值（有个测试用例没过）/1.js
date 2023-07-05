/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function(tokens) {
    let numStack = [];
    for(let i of tokens){
        if(!isNaN(Number(i))){
            numStack.push(Number(i));
        }else if(i==='+'){
            let a = numStack.pop();
            let b = numStack.pop();
            let c = a+b;
            numStack.push(c);
        }else if(i==='-'){
            let a = numStack.pop();
            let b = numStack.pop();
            let c = b-a;
            numStack.push(c);
        }else if(i==='*'){
            let a = numStack.pop();
            let b = numStack.pop();
            let c = b*a;
            numStack.push(c);
        }else if(i==='/'){
            let a = numStack.pop();
            let b = numStack.pop();
            let c = b/a|0;
            numStack.push(c);
        }
    }
    return numStack[0];
};