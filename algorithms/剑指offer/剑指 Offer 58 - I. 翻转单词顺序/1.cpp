class Solution {
public:
    string reverseWords(string s) {
        stack<string> stack1;
        for (int i = 0; i < s.size(); ++i) {
            string temp="";
            if(s[i]==' '){
                continue;
            }
            while (s[i]!=' '&&i<s.size()){
                temp.push_back(s[i]);
                i++;
            }
            stack1.push(temp);
        }
        string temp2 ="";
        bool isFirst = true;
        while (!stack1.empty()){
            if(isFirst){
                temp2.append(stack1.top());
                isFirst = false;
            } else{
                temp2.push_back(' ');
                temp2.append(stack1.top());
            }

            stack1.pop();
        }
        return temp2;
    }
};