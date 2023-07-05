/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    g.sort((a,b)=>{
        return a-b
    })
    s.sort((a,b)=>{
        return a-b
    })
    let res = 0;
    let child = 0;
    for(let i =0;i<s.length;i++){
        if(g[child]<=s[i]){
            res++;
            child++;
            continue;
        }else if(g[child]>s[i]){
            continue;
        }
    }
    return res;
};