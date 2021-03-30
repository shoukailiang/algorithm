// Brute Force
// Time Complexity: O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          return {i, j};
        }
      }
    }
    throw invalid_argument("the input has no solution");
  }
};

void printVec(const vector<int> &vec) {
  for (int e : vec)
    cout << e << " ";
  cout << endl;
}

int main() {
  vector<int> nums = {2, 7, 3, 0};
  int target = 9;
  printVec(Solution().twoSum(nums, target));
  return 0;
}
