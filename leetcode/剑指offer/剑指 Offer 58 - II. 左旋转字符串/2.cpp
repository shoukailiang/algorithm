class Solution {
public:
    string reverseLeftWords(string s, int k) {
        int n =s.size();
        string res = s;
        for(int i =0;i<n;i++){
            res[i] = s[(i+k)%n];
        }
        return res;
    }
};