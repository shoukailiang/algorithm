class Solution {
public:
    bool isStraight(vector<int>& nums) {
        unordered_set<int> s;
        int minNum = 100;
        int maxNum = -1;
        // 计算差值
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }
            maxNum = max(maxNum,nums[i]);
            minNum = min(minNum,nums[i]);
            if(s.count(nums[i])){
                return false;
            }
            s.insert(nums[i]);
        }
        return maxNum-minNum<5;
    }
};