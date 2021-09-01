
#include<iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    if(nums.size()==0){
      return 0;
    }
    int j=0,i=1;
    while(i<nums.size()){
      if(nums[i]==nums[j]){
        i++;
      }else{
        j++;
        nums[j] = nums[i];
      }
    }
    return j+1;  
  }
};

int main() {
  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int a = Solution().removeDuplicates(nums);
  cout << a << " ";
  return 0;
}