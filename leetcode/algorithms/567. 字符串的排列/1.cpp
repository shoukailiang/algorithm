class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left =0;
        int right =0;
        unordered_map<char,int> window;
        unordered_map<char,int> need;
        for(char c:s1){
            need[c]++;
        }
        int valid = 0;
        while(right<s2.size()){
            char d = s2[right];
            right++;
            if(need.count(d)){
                window[d]++;
                if(need[d]==window[d]){
                    valid++;
                }
            }
            while(right-left>=s1.size()){
                if(valid==need.size()){
                    return true;
                }
                char c = s2[left];
                left++;
                if(need.count(c)){
                    if(need[c]==window[c]){
                        valid--;
                    }
                    window[c]--;
                }
            }
        }
        return false;
    }
};