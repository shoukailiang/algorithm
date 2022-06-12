class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min = 1000000000;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target&&abs(i-start)<min){
                min = abs(i-start);
            }
        }
        return min;
    }
};