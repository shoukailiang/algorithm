#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
  string defangIPaddr(string address) {
    string a = "";
    for (auto s:address) {
      if (s != '.') {
        a += s;
      } else {
        a = a + "[" + s + "]";
      }
    }
    return a;
  }
};

// 测试
int main() {
  cout << Solution().defangIPaddr("1.1.1.1");
}