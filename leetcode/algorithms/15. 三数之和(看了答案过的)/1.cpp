#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "unordered_set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
#include "cstdio"
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left;
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                return result;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            left = i + 1;
            int right = nums.size() - 1;
            while (right > left) {
                if (nums[i] + nums[left] + nums[right] > 0) right--;
                else if (nums[i] + nums[left] + nums[right] < 0) left++;
                else {
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;
                    right--;
                    left++;
                }
            }
        }
        return result;
    }
};
int main() {
    vector<int> arr ={-1,0,1,2,-1,-4,-2,-3,3,0,4};
    vector<vector<int>> a = Solution().threeSum(arr);
    for (const auto &items: a){
        for (const auto &item: items){
            cout<<item;
        }
        cout<<endl;
    }
    return 0;
}