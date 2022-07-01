#include <iostream>
#include "vector"
#include "unordered_map"
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
       int s_len = s.size();
       int t_len = t.size();
       int i=0;
       int j=0;
       while(j<t_len){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                j++;
            }

       }
       return i==s_len;
    }
};
int main() {
    vector<int> nums = {2, 1, -1};
    string s = "bcd";
    string t = "ubcd";
    std::cout << (new Solution())->isSubsequence(s,t) << std::endl;
    return 0;
}
