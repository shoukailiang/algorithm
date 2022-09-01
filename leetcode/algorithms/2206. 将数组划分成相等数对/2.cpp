class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans =0;
        unordered_map<int,int> m;
        for(int i =0;i<nums.size();i++){
            int x = nums[i]+k;
            int y = nums[i]-k;
            if(x>=1&&x<=100&&m.count(x)){
                ans+=m[x];
            }
            if(y>=1&&y<=100&&m.count(y)){
                ans+=m[y];
            }
            m[nums[i]]++;
        }
        return ans;
    }
};