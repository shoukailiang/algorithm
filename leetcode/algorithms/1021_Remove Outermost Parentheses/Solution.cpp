#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
  string removeOuterParentheses(string S) {
    string res="";
    stack<char> sta;
    for (int i = 0; i < S.size(); ++i) {
      if(S[i]==')'){
        sta.pop();
      }
      if(!sta.empty()){
         res+=S[i];
      }
      if(S[i]=='('){
        sta.push('(');
      }
    }
    return res;
  }
};
int main() {

  string a  = Solution().removeOuterParentheses("(()())(())");
  cout<<a<<endl;
  return 0;
}