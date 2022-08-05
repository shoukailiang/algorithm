#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    vector<string> result;
    vector<int> indexs;
    int lenIndex = 0;
    void backtracking(string& s,int index){
        result.emplace_back(s);
        if(index>=lenIndex){
            return;
        }
        for (int i = index; i < lenIndex; ++i) {
            if (islower(s[indexs[i]])) {
                s[indexs[i]] = toupper(s[indexs[i]]);
            }else {
                s[indexs[i]] = tolower(s[indexs[i]]);
            }
            backtracking(s,i+1);
            // 回溯
            if (islower(s[indexs[i]])) {
                s[indexs[i]] = toupper(s[indexs[i]]);
            }else {
                s[indexs[i]] = tolower(s[indexs[i]]);
            }
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        int len = s.size();
        for (int i = 0; i < len; ++i) {
            if(isalpha(s[i])){
                indexs.emplace_back(i);
            }
        }
        lenIndex = indexs.size();
        if(!lenIndex){
            return {s};
        }
        backtracking(s,0);
        return result;
    }
};
int main() {
    string num = "a1b2";
    vector<string> res = Solution().letterCasePermutation(num);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}
