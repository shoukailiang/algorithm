#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count = 0;
        int result = INT32_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            count+=nums[i];
            if(count>result){
                result = count;
            }
            if(count<=0){
                count = 0;
            }
        }
        return result;
    }
};
int main()
{
    vector<int> num = {1,-17,5,10,13,15,10,5,16,8};
    cout<<(new Solution)->maxSubArray(num)<<endl;
}
