class Solution {
public:
    int maxDepth(string s) {
        int top =0;
        int maxv = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                top++;
            }
            if(s[i]==')'){
                top--;
            }
            maxv = max(maxv,top);
        }
        return maxv;

    }
};