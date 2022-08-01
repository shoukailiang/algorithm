class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int result = 0;
        for(int i =0;i<grid.size();i++){
            int left = 0;
            int right = grid[0].size()-1;
            while(left<right){
                int mid = (left+right)/2;
                if (grid[i][mid] >= 0) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            if (grid[i][left] < 0) {
                result += grid[0].size() - left;
            }
        }
        return result;
    }
};