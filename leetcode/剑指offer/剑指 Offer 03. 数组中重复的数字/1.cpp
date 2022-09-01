class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int i =0;i<nums.size();++i){
            if(s.count(nums[i])){
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return -1;
    }
};