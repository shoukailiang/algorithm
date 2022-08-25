class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        return m[target];
    }
};