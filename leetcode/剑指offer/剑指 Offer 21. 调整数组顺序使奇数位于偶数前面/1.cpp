class Solution {
public:
    vector<int> exchange(vector<int>& nums){
        int l = 0;
        int r = nums.size()-1;
        while(l<r){
            if(nums[l]&1){
                l++;
                continue;
            }
            if(nums[r]%2==0){
                r--;
                continue;
            }
            swap(nums[l],nums[r]);
        }
        return nums;
    }
};