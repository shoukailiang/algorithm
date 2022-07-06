#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int mid = 0;
        while(l<=r){
            mid = (r-l)/2+l;
            if(nums[mid]>target){
                r = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};
int main() {

    vector<int> num = {-1};
    cout<<(new Solution)->search(num,2);
    return 0;
}
