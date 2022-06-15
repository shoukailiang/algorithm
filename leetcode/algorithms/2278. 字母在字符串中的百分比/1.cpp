#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0;
        for (const auto &item: s){
            if(letter==item){
                cnt++;
            }
        }
        return cnt*100/s.size();
    }
};
int main() {
    vector<int> arr = {49,18,16};
    vector<vector<int>> pieces ={{16,18,49}};
    cout<<(new Solution())->percentageLetter("abcdabbb",'b')<<endl;
}
