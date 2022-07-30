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
    int specialArray(vector<int>& nums) {
        int left = 0;
        int right = nums.size();
        int mid = 0;
        sort(nums.begin(),nums.end());
        while(left<=right){
            mid = (left+right)>>1;
            int  res = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if(nums[i]>=mid){
                   res++;
                }
            }
            if(res>mid){
                left = mid+1;
            }else if(res<mid){
                right = mid-1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};
int main() {
    vector<int> arr ={-1,0,1,2,-1,-4,-2,-3,3,0,4};
    int res = Solution().specialArray(arr);
    cout<<res<<endl;
//    for (const auto &items: a){
//        for (const auto &item: items){
//            cout<<item;
//        }
//        cout<<endl;
//    }
    return 0;
}