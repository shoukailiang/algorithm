#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        for (int i = 0; i < intervals.size(); ++i) {
            int l = intervals[i][0];
            int r = intervals[i][1];
            if(!merged.size()||merged.back()[1]<l){
                merged.push_back({l,r});
            }else{
                merged.back()[1] = max(merged.back()[1],r);
            };
        }
        return merged;
    }
};
int main() {
    vector<vector<int>> temp = {{1,6},{2,8},{8,10},{15,18}};
    vector<vector<int>> res  = (new Solution())->merge(temp);
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i][0]<<" "<<res[i][1]<<endl;
    }
    return 0;
}
