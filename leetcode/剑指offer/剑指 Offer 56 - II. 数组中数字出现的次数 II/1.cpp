class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for (const auto &item: nums){
            m[item]++;
        }
        for (const auto &item: m){
            if(item.second==1){
                return item.first;
            }
        }
        return -1;
    }
};