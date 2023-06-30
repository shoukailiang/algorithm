class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int> m;
        for(int a:nums1){
            for(int b:nums2){
                m[a+b]++;
            }
        }
        int count=0;
        for(int a:nums3){
            for(int b:nums4){
                if(m.find(0-(a+b))!=m.end()){
                    count+=m[0-(a+b)];
                }
            }
        }
        return count;
    }
};