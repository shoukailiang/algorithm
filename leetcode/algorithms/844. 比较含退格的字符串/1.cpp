class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_stack = "";
        string t_stack = "";
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]!='#'){
                s_stack+=s[i];
            }else if(!s_stack.empty()){
                s_stack.pop_back();
            }
        }
        for (int i = 0; i < t.size(); ++i) {
            if(t[i]!='#'){
                t_stack+=t[i];
            }else if(!t_stack.empty()){
                t_stack.pop_back();
            }
        }
        if(s_stack==t_stack){
            return true;
        }
        return false;
    }
};