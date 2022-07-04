#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        set<char> ss;
        int cnt = 0;
        for (const auto &item: s){
            if(!ss.count(item)){
                ss.insert(item);
            }else{
                ss.erase(item);
                cnt++;
            }
        }

        if(ss.empty()){
            return cnt*2;
        }else{
            return cnt*2+1;
        }

    }
};
int main() {
    string temp = "bb";
    cout<<(new Solution())->longestPalindrome(temp)<<endl;
    return 0;
}
