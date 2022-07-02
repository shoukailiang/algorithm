#include <iostream>
#include "vector"
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        if(len==1){
            return 0;
        }
        int suml = 0;
        int sumr = 0;
        for (const auto &item : nums){
            sumr+=item;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if(suml==sumr-nums[i]){
                return i;
            }
            suml+=nums[i];
            sumr-=nums[i];
        }
        return -1;
    }
};
int main() {
    vector<int> nums = {2, 1, -1};
    std::cout << (new Solution())->pivotIndex(nums) << std::endl;
    return 0;
}
