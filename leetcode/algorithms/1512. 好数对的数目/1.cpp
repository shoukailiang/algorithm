class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int res = 0;
        for (const auto &item: m){
            res+= (item.second)*(item.second-1)/2;
        }
        return res;

    }
};