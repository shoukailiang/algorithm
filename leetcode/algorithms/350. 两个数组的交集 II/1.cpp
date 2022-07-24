#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int,int> maps;
        for (const auto &item: nums1){
            maps[item]++;
        }
        for (const auto &item: nums2){
            if(maps.count(item)){
                result.push_back(item);
                maps[item]--;
                if(maps[item]==0){
                    maps.erase(item);
                }
            }
        }
        return result;
    }
};


int main() {
    
   return 0;
}
