#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  int numJewelsInStones(string J, string S) {
    int size = 0;
    for (int i = 0; i < J.size(); ++i) {
      for (int j = 0; j < S.size(); ++j) {
        if (J[i] == S[j]) {
          size++;
        }
      }
    }
    return size;
  }
};

// 测试
int main() {

  cout << Solution().numJewelsInStones("z", "ZZ");
}