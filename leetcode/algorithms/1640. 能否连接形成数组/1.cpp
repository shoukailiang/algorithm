#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int i =0;
        bool flag = false;
        while (i < arr.size()) {
            flag = false;
            for (int j = 0; j < pieces.size(); ++j) {
                if(arr[i]!=pieces[j][0]){
                    continue;
                }
                for (int k = 0; k < pieces[j].size(); ++k) {
                    if(arr[i]==pieces[j][k]){
                        i++;
                        flag = true;
                    }else{
                        flag = false;
                    }
                }
                if(i==arr.size()){
                    return true;
                }
            }
            if(!flag){
                return false;
            }
        }
        return true;
    }
};
int main() {
    vector<int> arr = {49,18,16};
    vector<vector<int>> pieces ={{16,18,49}};
    cout<<(new Solution())->canFormArray(arr,pieces)<<endl;
}
