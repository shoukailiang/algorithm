class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        if(len==0||len==2) return -1;
        if(len==1) return 0;
        int suml= 0 ,sumr= 0;
        for(int num:nums){
            sumr+=num;
        }
        for(int i =0;i<len;i++){
            if(suml == sumr-nums[i]){
                return i;
            }
            suml+=nums[i];
            sumr-=nums[i];
        }
        return -1;
    }
};