class Solution {
public:
    bool isUnique(string astr) {
        unordered_map<char,bool> sets;
        for(char c:astr){
            if(sets[c]){
                return false;
            }else{
                sets[c] = true;
            }
        }
        return true;
    }
};