#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> que;
        for (const auto &item: stones) {
            que.push(item);
        }
        while(que.size()>1){
            int a = que.top();
            que.pop();
            int b = que.top();
            que.pop();
            if(a!=b){
                int res = abs(a-b);
                que.push(res);
            }
        }
        return que.size()==0?0:que.top();
    }
};
int main() {
    vector<int> stones = {2,7,4,1,8,1};
    int a = Solution().lastStoneWeight(stones);
    cout<<a<<endl;
    return 0;
}
