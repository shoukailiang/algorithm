#include <iostream>
#include <vector>
using namespace std;
class Solution {
    bool isPrefix(string word,string s){
        if(word.size()>s.size()){
            return false;
        }
        for (int i = 0; i < word.size(); ++i) {
            if(word[i]!=s[i]){
                return false;
            }
        }
        return true;
    }
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for (const auto &item: words){
            if(isPrefix(item,s)){
                cnt++;
            }
        }
        return cnt;
    }
};
int main() {
    vector<string> ss = {"abc","ab","a","b","aaa"};
    cout<<(new Solution())->countPrefixes(ss,"abd")<<endl;
}
