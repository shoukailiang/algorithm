#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {

    unordered_set<int> hashset;
    for (int i = 0; i < nums.size(); ++i) {
      if (hashset.count(nums[i])>0) {
        return true;
      } else {
        hashset.insert(nums[i]);
      }
    }
    return false;
  }
};

int main() {
  vector<int> nums = {2, 2, 3, 4};
  cout << Solution().containsDuplicate(nums);
  return 0;
}