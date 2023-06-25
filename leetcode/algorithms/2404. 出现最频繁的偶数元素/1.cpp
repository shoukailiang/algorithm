class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> min;
        for(auto n:nums){
            if(n%2==0){
                m[n]++;
            }
        }
        if(m.size()==0) return -1;
        int maxN = INT32_MIN;
        int maxKey = INT32_MIN;
        for(auto n:m){
            if(n.second>maxN){
                maxN = n.second;
                maxKey = n.first;
            }else if(n.second==maxN){
                maxKey = maxKey<n.first?maxKey:n.first;
            }
        }
        return maxKey;
    }
};