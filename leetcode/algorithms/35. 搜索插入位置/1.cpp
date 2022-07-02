#include <iostream>
#include "vector"
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int mid = (l+r)/2;
        while(l<=r){
            if(nums[mid]>target){
                r = mid-1;
            }else if(nums[mid]<target){
                l = mid +1;
            }else{
                return mid;
            }
            mid = (l+r)/2;
        }
        return l;
    }
};
int main() {
    vector<int> temp = {1,3,5,6};
    std::cout << (new Solution())->searchInsert(temp,2) << std::endl;
    return 0;
}
