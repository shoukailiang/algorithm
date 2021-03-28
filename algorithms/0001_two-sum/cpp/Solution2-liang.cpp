
#include<iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {

    // 第一个int value
    // 第二个int index
    unordered_map<int,int> maps;
    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];
        if(maps.find(complement) != maps.end()){
            return vector<int>{i,maps[complement]};
        }
        maps[nums[i]] = i;
    }
    return vector<int>{};
  }
};

int main() {
  vector<int> nums = {2, 7, 11, 15};
  vector<int> a = Solution().twoSum(nums, 9);
  for (auto i:a) {
    cout << i << " ";
  }
  return 0;
}