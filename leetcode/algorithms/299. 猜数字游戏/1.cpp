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
    string getHint(string secret, string guess) {
        map<char,int> maps;
        int cnt1= 0;
        int cnt2 = 0;
        for (const auto &item: secret){
            maps[item]++;
        }
        for (int i = 0; i < guess.size(); ++i) {
            if(secret[i]==guess[i]){
                cnt1++;
                maps[guess[i]]--;
            }
        }
        for (int i = 0; i < guess.size(); ++i) {
            if(secret[i]!=guess[i]&&maps[guess[i]]>0){
                cnt2++;
                maps[guess[i]]--;
            }
        }
        string res = to_string(cnt1)+"A"+ to_string(cnt2)+"B";
        return res;
    }
};
int main() {
    string secret = "1807", guess = "7810";
    string a = Solution().getHint(secret, guess);
    cout<<a<<endl;
    return 0;
}
