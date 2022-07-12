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
    int characterReplacement(string s, int k) {
        int res = 0;
        vector<int> arr(26,0);
        int left = 0 ,right = 0;
        int maxN = -1;
        while(right<s.size()){
            arr[s[right]-'A'] ++;
            // 查找最大的
            if(arr[s[right]-'A']>maxN){
                maxN = arr[s[right]-'A'];
            }
            int len = right-left+1;
            int replceCount = len - maxN;
            if(replceCount<=k){
                res = max(len,res);
            }else{
                arr[s[left]-'A']--;
                left++;
            }
            right++;
        }
        return res;
    }
};
int main() {
    string s = "AABABBA";
    int aa = (new Solution())->characterReplacement(s,2);
    cout<<aa<<endl;
    return 0;
}
