class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res ;
        long long sum =0;
        for(int i =0;i<nums.size();i++){
            sum = ((sum<<1)+nums[i])%5;
            res.push_back(sum==0);
        }
        return res;
    }
};