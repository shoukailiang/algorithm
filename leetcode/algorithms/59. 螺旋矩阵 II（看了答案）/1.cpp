#include <iostream>
#include "vector"
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res = vector<vector<int>>(n, vector<int>(n, 0));
        int i = 0,j=0;
        int count = 1;
        int offset = 1;
        while(count<n*n){
            while(j<n-offset+1&&res[i][j]==0){
                res[i][j++] = count++;
            }
            i++;j--;
            while(i<n-offset+1&&res[i][j]==0){
                res[i++][j] = count++;
            }
            i--;j--;
            while(j>=offset-1&&res[i][j]==0){
                res[i][j--] = count++;
            }
            j++;i--;
            while(i>=offset&&res[i][j]==0){
                res[i--][j] = count++;
            }
            i++;
            j++;
            offset++;
        }
        if(n%2==1){
            res[n/2][n/2] = count;
        }
        return res;
    }
};
int main() {
    vector<vector<int>> res = (new Solution())->generateMatrix(1);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}
