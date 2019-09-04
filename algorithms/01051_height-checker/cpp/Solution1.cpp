#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  int heightChecker(vector<int> &heights) {
    int count = 0;
    vector<int> temp = heights;
    sort(heights.begin(), heights.end());
    for (int i = 0; i < heights.size(); ++i) {
      if (temp[i] != heights[i]) {
        count++;
      }
    }
    return count;
  }
};

int main() {
  vector<int> nums = {1, 1, 4, 6, 1, 3};
  int a = Solution().heightChecker(nums);
  cout << a << " ";
  return 0;
}