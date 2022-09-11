class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> arr;
        for(int n:nums){
            m[n]++;
        }
        for(auto item:m){
            if(item.second==1){
                arr.push_back(item.first);
            }
        }
        return arr;
    }
};