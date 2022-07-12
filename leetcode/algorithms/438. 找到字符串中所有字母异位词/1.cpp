#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "unordered_map"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> need,window;
        for(char c: p){
            need[c]++;
        }
        int left = 0;
        int right = 0;
        int valid = 0;
        vector<int> res;
        while(right<s.size()){
            char c = s[right];
            right++;
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c]){
                    valid++;
                }
            }
            while(right-left>=p.size()){
                if(valid==need.size()){
                    res.push_back(left);
                }
                char d = s[left];
                left++;
                if(need.count(d)){
                    if(window[d]==need[d]){
                        valid--;
                    }
                    window[d]--;
                }
            }
        }
        return res;
    }
};
int main() {
    string s = "cbaebabacd", p = "abc";
    vector<int> aa = (new Solution())->findAnagrams(s,p);
    for (const auto &item: aa){
        cout<<item<<" ";
    }
    return 0;
}
