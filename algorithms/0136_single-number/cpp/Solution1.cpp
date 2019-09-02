//
// Created by liang on 2019/8/22.
//
#include<iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    unordered_set<int> hashset;
    int ret;
    for(auto i :nums){
      if(hashset.count(i)>0){
        hashset.erase(i);
      } else{
        hashset.insert(i);
      }
    }
    for (auto j:hashset) {
      ret = j;
    }
    return ret;
  }
};

int main() {
  vector<int> nums = {2, 4, 2};
  cout << Solution().singleNumber(nums);
  return 0;
}