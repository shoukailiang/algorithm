class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m ;
        for(int num:nums){
            if(m.count(target-num)){
                return {num,target-num};
            }
            m[num] = 1;
        }
        return {};
    }
};