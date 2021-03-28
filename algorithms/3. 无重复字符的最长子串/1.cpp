class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> window;
        int left=0,right=0;
        int res = 0;
        while(right<s.size()){
            char d = s[right];
            right++;
            window[d]++;
            while(window[d]>1){
                char c = s[left];
                left++;
                window[c]--;
            }
            res=max(res,right-left);
        }
        return res;
    }
};