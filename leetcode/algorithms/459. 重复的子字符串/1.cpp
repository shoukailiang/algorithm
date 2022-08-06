class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s+s;
        t.erase(t.begin());
        t.erase(t.end()-1);
        if(t.find(s)!=string::npos){
            return true;
        }else{
            return false;
        }
    }
};