#include <iostream>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution1 {
public:
  bool isValid(string s) {
    stack<char> first;
    for (int i = 0; i < s.size(); ++i) {
      cout << s[i] << endl;
      if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
        first.push(s[i]);
      } else {
        // 若是"["
        if (first.empty()) {
          return false;
        }
        if (s[i] == ')' && first.top() != '(') {
          return false;
        }
        if (s[i] == ']' && first.top() != '[') {
          return false;
        }
        if (s[i] == '}' && first.top() != '{') {
          return false;
        }
        first.pop();
      }
    }
    return first.empty();
  }
};

int main() {
  cout << Solution1().isValid("[]");
  return 0;
}