#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int result = 1;
        if(nums.size()<=1){
            return result;
        }
        int preDiff = 0;
        int curDiff = 0;
        for (int i = 0; i < nums.size()-1; ++i) {
            curDiff = nums[i+1]-nums[i];
            if((preDiff<=0&&curDiff>0)||(preDiff>=0&&curDiff<0)){
                result++;
                preDiff = curDiff;
            }
        }
        return result;

    }
};
int main()
{
    vector<int> num = {1,17,5,10,13,15,10,5,16,8};
    cout<<(new Solution)->wiggleMaxLength(num)<<endl;
}
