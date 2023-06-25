class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1) return true;
        int res = 0;
        for(int i=0;i<=res;i++){
            res = max(i+nums[i],res);
            if(res>=nums.size()-1){
                return true;
            }
        }
        return false;
    }
};