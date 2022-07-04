#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT32_MAX;
        int maxp = 0;
        for (const auto &item: prices){
            if(item<min){
                min = item;
            }else if(item-min>maxp){
                maxp = item-min;
            }
        }
        return maxp;
    }
};
int main() {
    vector<int> temp = {7,1,5,3,6,4};
    cout<<(new Solution())->maxProfit(temp)<<endl;
    return 0;
}
