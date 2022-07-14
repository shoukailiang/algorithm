#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
using namespace std;

bool cmp(pair<string,int> p1,pair<string,int> p2){
    if(p1.second>p2.second){
        return true;
    }else if(p1.second==p2.second){
        return p1.first<p2.first;
    }else{
        return false;
    }
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> cnt;
        for (auto& word : words) {
            ++cnt[word];
        }
        vector<pair<string,int>> result;
        for (const auto &item: cnt){
            result.push_back(item);
        }
        sort(result.begin(), result.end(), cmp);
        vector<string> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(result[i].first);
        }
        return res;
    }
};
int main() {
    vector<string> ss = {"i", "love", "leetcode", "i", "love", "coding"};
    vector<string> res = Solution().topKFrequent(ss,2);
    for (const auto &item: res){
        cout<<item<<endl;
    }
    return 0;
}
