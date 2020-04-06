#include<iostream>
#include <stack>
#include <vector>
using namespace std;


class Solution {
public:
  int evalRPN(vector<string>& tokens) {
    stack<int> open;
    for(int i=0;i<tokens.size();i++){
      string t = tokens[i];
      if(t=="+"){
        int a = open.top();
        open.pop();
        int b = open.top();
        open.pop();
        open.push(a+b);
      }else if(t=="-"){
        int a = open.top();
        open.pop();
        int b = open.top();
        open.pop();
        open.push(b-a);
      }else if(t=="*"){
        int a = open.top();
        open.pop();
        int b = open.top();
        open.pop();
        open.push(a*b);
      }else if(t=="/"){
        int a = open.top();
        open.pop();
        int b = open.top();
        open.pop();
        open.push(b/a);
      }else{
        // 数字
        open.push(stoi(t));
      }
    }
    return open.top();
  }
};
int main(){
  vector<string> a ={"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
  int i = Solution().evalRPN(a);
  cout<<i<<endl;
  return 0;
}
