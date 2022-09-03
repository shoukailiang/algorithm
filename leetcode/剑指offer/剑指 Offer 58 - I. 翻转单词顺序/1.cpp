class Solution {
public:
    string reverseWords(string s) {
        stack<string> sta;
        string temp ="";
        int i =0;
        while(i<s.size()){
            if(s[i]==' '){
                i++;
                continue;
            }
            temp+=s[i];
            i++;
            if(s[i]==' '||i==s.size()){
                sta.push(temp);
                temp = "";
            }
        }
        string res = "";
        bool isFirst = true;
        int size = sta.size();
        while(size--){
            if(isFirst){
                res+=sta.top();
                sta.pop();
                isFirst = false;
            }else{
                res = res+" ";
                res+=sta.top();
                sta.pop();
            }
        }
        return res;
    }
};