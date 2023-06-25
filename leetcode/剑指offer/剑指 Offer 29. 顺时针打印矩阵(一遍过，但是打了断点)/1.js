/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    if(matrix.length===0){
        return [];
    }
    let count = 0;
    let h = matrix.length;
    let w = matrix[0].length;
    let arr = [];
    let i =0;
    let j =0;
    let offset = 0;
    while(count<h*w){
        while(j<w-offset&&count<h*w){
            arr.push(matrix[i][j]);
            count++;
            j++;
        }
        i++;
        j--;
        while(i<h-offset&&count<h*w){
            arr.push(matrix[i][j]);
            count++;
            i++;
        }
        i--;
        j--;
        while(j>=offset&&count<h*w){
            arr.push(matrix[i][j]);
            count++;
            j--;
        }
        i--;
        j++;
        while(i>offset&&count<h*w){
            arr.push(matrix[i][j]);
            count++;
            i--;
        }
        i++;
        j++;
        offset++;
    }
    return arr;
};