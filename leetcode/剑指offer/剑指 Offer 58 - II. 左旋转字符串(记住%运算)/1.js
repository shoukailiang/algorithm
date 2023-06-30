/**
 * @param {string} s
 * @param {number} n
 * @return {string}
 */
var reverseLeftWords = function(s, n) {
    let size = s.length;
    let res =[];
    for(let i =0;i<size;i++){
        res.push(s[(i+n)%size]);
    } 
    return res.join("");
};