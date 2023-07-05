#include <iostream>
#include <vector>
#include "unordered_map"
#include "algorithm"
#include "queue"
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(auto& c:nums){
            map[c]++;
        }
        struct cmp{
            bool operator()(pair<int,int>& p1,pair<int,int>&p2){
                return p1.second>p2.second;
            }
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;

        for(auto& a:map){
            q.push(a);
            if(q.size()>k){
                q.pop();
            }
        }

        vector<int> res;
        while(!q.empty()){
            res.emplace_back(q.top().first);
            q.pop();
        }
        return res;
    }
};
int main() {

}
