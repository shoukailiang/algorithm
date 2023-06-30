/**
 * @param {string} s
 * @return {boolean}
 */
var repeatedSubstringPattern = function (s) {
    let str = s + s;
    return str.indexOf(s, 1) !== s.length;
  };