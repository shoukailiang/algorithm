var createMap = function(str) {
    let map = new Map();
    for (let i of str) {
        if (map.has(i)) {
            map.set(i, map.get(i) + 1);
        } else {
            map.set(i, 1);
        }
    }
    return map;
};

var findTheDifference = function(s, t) {
    let sMap = createMap(s);
    let tMap = createMap(t);
    if(s.length>=t.length){
        for(let [key,] of sMap){
            if(!tMap.has(key)){
                return key;
            }else if(tMap.get(key)!==sMap.get(key)){
                return key;
            }
        }
    }else{
        for(let [key,] of tMap){
            if(!sMap.has(key)){
                return key;
            }else if(tMap.get(key)!==sMap.get(key)){
                return key;
            }
        }
    }
    return "";
};