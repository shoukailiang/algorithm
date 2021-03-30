class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];   
            temp.push_back(sum);
        }
        return temp;
    }
};