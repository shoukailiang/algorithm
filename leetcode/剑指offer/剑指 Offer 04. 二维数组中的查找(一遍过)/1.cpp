class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int i = matrix.size()-1;
        int j =0;
        if(matrix.size()==1&&matrix.at(0).size()==0){
            return false;
        }
        while(i>=0&&i<=matrix.size()-1 &&j>=0&&j<=matrix.at(0).size()-1){
            if(matrix[i][j]<target){
                j++;
            }else if (matrix[i][j]>target){
                i--;
            }else {
                return true;
            }
            
        }
        return false;
    }
};