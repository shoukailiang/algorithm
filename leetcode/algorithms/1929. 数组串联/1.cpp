class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(2*size,0);
        int j =0;
        for(int i =0;i<2*size;i++){
            if(j==size){
                j=0;
            }
            res[i] = nums[j];
            j++;
        }
        return res;
    }
};