/**
 * @param {string} s
 * @return {character}
 */
var firstUniqChar = function(s) {
    let m = new Map();
    for(let i of s){
        if(m.has(i)){
            m.set(i,m.get(i)+1);
        }else{
            m.set(i,1);
        }
    }
    for(let i of s){
        if(m.get(i)==1) {
            return i
        }
    }
    return ' ';
};