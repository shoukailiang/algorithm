class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> arr(510,0);
        for(int i =0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(int i =0;i<arr.size();i++){
            // 奇数
            if(arr[i]&1){
                return false;
            }
        }
        return true;
    }
};