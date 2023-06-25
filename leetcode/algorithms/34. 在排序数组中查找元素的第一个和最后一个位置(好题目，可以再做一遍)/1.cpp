class Solution {
private:
    int getRightBorder(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size()-1;
        int rightBorder = -2;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
                // 《= 的时候更新
                rightBorder = left;
            }
        }
        return rightBorder;
    }
    int getLeftBorder(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1; 
        int leftBorder = -2; 
        while (left <= right) {
            int middle = left + ((right - left) / 2);
            if (nums[middle] >= target) { 
                right = middle - 1;
                leftBorder = right;
            } else {
                left = middle + 1;
            }
        }
        return leftBorder;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int leftBorder = getLeftBorder(nums, target);
        int rightBorder = getRightBorder(nums, target);
        // target 在数组范围的右边或者左边，例如数组{3, 4, 5}，target为2或者数组{3, 4, 5},target为6，此时应该返回{-1, -1}
        if (leftBorder == -2 || rightBorder == -2) return {-1, -1};
        // target 在数组范围中，且数组中存在target，例如数组{3,6,7},target为6，此时应该返回{1, 1}
        if (rightBorder - leftBorder > 1) return {leftBorder + 1, rightBorder - 1};
        // target 在数组范围中，且数组中不存在target，例如数组{3,6,7},target为5，此时应该返回{-1, -1}
        return {-1, -1};
    }
};