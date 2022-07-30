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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            // 减枝
            if(nums[i]>target&&nums[i]>=0&&target>=0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            for (int j = i+1; j < nums.size(); ++j) {
                // 二级减枝
                if(nums[i]+nums[j]>target&&nums[i]+nums[j]>=0&&target>=0){
                    break;
                }
                if(j>i+1&&nums[j]==nums[j-1]){
                    continue;
                }
                int left = j+1;
                int right = nums.size()-1;
                while (left<right){
                    if(nums[i]+nums[j]+nums[left]+nums[right]>target){
                        right--;
                    }else if(nums[i]+nums[j]+nums[left]+nums[right]<target){
                        left++;
                    }else{
                        result.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        while (left<right && nums[right]== nums[right-1]){
                            right--;
                        }
                        while (left<right && nums[left]==nums[left+1]){
                            left++;
                        }
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
int main() {
    vector<int> arr ={-1,0,0,1,2,-2};
    vector<vector<int>> res = Solution().fourSum(arr,0);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item;
        }
        cout<<endl;
    }
    return 0;
}