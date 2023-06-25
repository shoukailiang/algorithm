#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // 记录最小的长度
        int result = INT32_MAX;
        int sum = 0;
        // 左边指针
        int i =0;
        int subLen = 0;
        for (int j = 0; j < nums.size(); ++j) {
            sum+=nums[i];
            while(sum>=target){
                subLen = j-i+1;
                result = result<subLen?result:subLen;
                sum-=nums[i];
                i++;
            }
        }
        return result==INT32_MAX?0:result;

    }
};



int main() {

    return 0;
}
