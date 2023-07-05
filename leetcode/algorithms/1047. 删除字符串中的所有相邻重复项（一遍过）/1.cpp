#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    string removeDuplicates(string s) {
        string ss;
        for (char ch : s) {
            if(ss.empty()||ss.back()!=ch){
                ss.push_back(ch);
            }else{
                ss.pop_back();
            }
        }
        return ss;
    }
};
int main() {
    string res = Solution().removeDuplicates("abbaca");
    cout<<res<<endl;
    return 0;
}
