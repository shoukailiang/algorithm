#include <iostream>
#include "vector"
#include "unordered_map"
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ss;
        unordered_map<char,char> tt;
        int len = s.size();
        for (int i = 0; i < len; ++i) {
            char s_temp = s[i];
            char t_temp = t[i];
            if((ss.count(s_temp)&&ss[s_temp]!=t_temp)||(tt.count(t_temp)&&tt[t_temp]!=s_temp)){
                return false;
            }
            ss[s_temp] = t_temp;
            tt[t_temp] = s_temp;
        }
        return true;
    }
};
int main() {
    vector<int> nums = {2, 1, -1};
    string s = "egg";
    string t = "aob";
    std::cout << (new Solution())->isIsomorphic(s,t) << std::endl;
    return 0;
}
