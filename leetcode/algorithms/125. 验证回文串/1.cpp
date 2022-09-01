class Solution {
public:
    bool isPalindrome(string s) {
        // 小写转大写
        for(int i =0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                s[i] = s[i] - 'a' +'A';
            }
        }
        int l =0;
        int r = s.size()-1;
        while(l<r){
            if(!(s[l]>='A'&&s[l]<='Z'||s[l]>='0'&&s[l]<='9')){
                l++;
                continue;
            }
            if(!(s[r]>='A'&&s[r]<='Z'||s[r]>='0'&&s[r]<='9')){
                r--;
                continue;
            }
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};