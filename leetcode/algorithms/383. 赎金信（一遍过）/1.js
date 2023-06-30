/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let s_m = new Map();
    for(let i of magazine){
        s_m.set(i,s_m.get(i)?s_m.get(i)+1:1);
    }

    for(let i of ransomNote){
        if(s_m.get(i)>=1){
            s_m.set(i,s_m.get(i)-1);
        }else {
            return false;
        }
    }
    return true;
};