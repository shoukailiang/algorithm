#include <iostream>
#include<string>
#include<algorithm>
#include "vector"
using namespace std;
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s.begin(),s.begin()+n);
        reverse(s.begin()+n, s.end());
        reverse(s.begin(),s.end());
        return s;
    }
};
int main() {
    string res = (new Solution())->reverseLeftWords("1234",2);
    cout<<res<<endl;
    return 0;
}
