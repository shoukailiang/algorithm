class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0;
        for (const auto &item: s){
            if(letter==item){
                cnt++;
            }
        }
        return cnt*100/s.size();
    }
};