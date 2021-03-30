class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        unordered_map<char,int> maps;
        for(char c: s1){
            maps[c] ++;
        }
        for(char c:s2){
            maps[c]--;
        }
        for(int i=0;i<26;i++){
            char temp ='a'+i;
            if(maps[temp]!=0){
                return false;
            }
        }
        return true;
    }
};