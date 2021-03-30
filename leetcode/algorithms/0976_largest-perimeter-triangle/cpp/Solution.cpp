#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  int largestPerimeter(vector<int> &A) {
    sort(A.begin(), A.end());
    int len = A.size();
    for (int i = len - 1; i >= 2; --i) {
      if (A[i - 2] + A[i - 1] > A[i]) {
        return A[i - 2] + A[i - 1] + A[i];
      }
    }
    return 0;
  }
};

// 测试
int main() {
  vector<int> a = {3, 2, 3, 4};
  cout << Solution().largestPerimeter(a);
}