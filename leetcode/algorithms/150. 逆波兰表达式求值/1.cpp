#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if (tokens[i] == "+") st.push(num2 + num1);
                if (tokens[i] == "-") st.push(num2 - num1);
                if (tokens[i] == "*") st.push(num2 * num1);
                if (tokens[i] == "/") st.push(num2 / num1);
            }else{
                st.push(stoi(tokens[i]));
            }
        }
        int result = st.top();
        st.pop();
        return result;
    }
};
int main(){
  vector<string> a ={"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
  int i = Solution().evalRPN(a);
  cout<<i<<endl;
  return 0;
}
