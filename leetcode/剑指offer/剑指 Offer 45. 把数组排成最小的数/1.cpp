class Solution {
public:
    string minNumber(vector<int>& nums) {
        vector<string> strs;
        string res;
        for(int i = 0; i < nums.size(); i++){
            strs.push_back(to_string(nums[i]));
        }
        sort(strs.begin(),strs.end(),[](string&x,string&y){
            return x+y<y+x;
        });
        for(int i = 0; i < strs.size(); i++){
            res.append(strs[i]);
        }
        return res;
    }
};