#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  int numJewelsInStones(string J, string S) {
    int size = 0;
    unordered_set<char> jew;
    for (auto j:J) {
      jew.insert(j);
    }
    for (auto s:S) {
      cout << jew.count(s) << endl;
      if (jew.count(s)) {
        size++;
      }
    }
    return size;
  }
};

// 测试
int main() {
  cout << Solution().numJewelsInStones("az", "aaZZ");
}