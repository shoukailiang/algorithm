#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  int arrayPairSum(vector<int> &nums) {
    int result = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i += 2) {
      result += min(nums[i], nums[i + 1]);
    }
    return result;
  }
};


int main() {
  vector<int> b = {1, 4, 3, 2, 5, 6};
  int i = Solution().arrayPairSum(b);
  cout << i << endl;
  return 0;
}
