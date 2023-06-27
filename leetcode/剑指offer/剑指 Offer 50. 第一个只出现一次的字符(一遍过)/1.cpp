class Solution {
public:
    char firstUniqChar(string s) {
        if(s==" "){
            return ' ';
        }
        unordered_map<char,int> m;
        for(char c:s){
            m[c]++;
        }
        for(int i =0;i<s.size();i++){
            if(m[s[i]]==1){
                return s[i];
            }
        }
        return ' ';
    }
};