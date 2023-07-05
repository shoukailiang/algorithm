/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
function reverseStr(s, k) {
    let result = Array.from(s);
    let i = 0;
    const n = s.length;
    while (i < n) {
      // 计数至 2k 个字符，反转前 k 个字符
      if (i + 2 * k <= n) {
        reverseRange(result, i, i + k);
        i += 2 * k;
      }
      // 处理剩余字符少于 k 个的情况
      else if (i + k < n) {
        reverseRange(result, i, i + k);
        break;
      }
      // 处理剩余字符小于 2k 但大于或等于 k 个的情况
      else {
        reverseRange(result, i, n);
        break;
      }
    }
  
    return result.join(''); 
  }
  
  function reverseRange(arr, start, end) {
    let i = start, j = end - 1;
    while (i < j) {
      [arr[i], arr[j]] = [arr[j], arr[i]];
      i++;
      j--;
    }
  }
  