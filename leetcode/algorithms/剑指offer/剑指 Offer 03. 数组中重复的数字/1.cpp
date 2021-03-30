class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,bool> maps;
        for(int num:nums){
            if(maps[num]) return num;
            else maps[num] = true;
        }
        return -1;
    }
};