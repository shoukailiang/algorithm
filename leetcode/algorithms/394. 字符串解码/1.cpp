#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        // 3[a2[c]]
        int len =  s.size();
        int num = 0;
        stack<int> numstack;
        stack<string> strstack;
        string cur = "";
        string result = "";
        for (int i = 0; i < len; ++i) {
            if(s[i]>='0'&&s[i]<='9'){
                num = 10*num+s[i]-'0';
            }else if(s[i]=='['){
                numstack.push(num);
                strstack.push(cur);
                num = 0;
                cur.clear();
            }else if(isalpha(s[i])){
                cur+=s[i];
            }else if (s[i]==']'){
                int k = numstack.top();
                numstack.pop();
                for (int j = 0; j < k; ++j) {
                    strstack.top()+=cur;
                }
                cur = strstack.top();
                strstack.pop();
            }
        }
        result = result+cur;
        return result;
    }
};
int main() {
    string secret = "3[a2[c]]";
    string a = Solution().decodeString(secret);
    cout<<a<<endl;
    return 0;
}
