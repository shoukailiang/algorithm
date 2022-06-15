#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        int absent =0;
        for (int j = 0; j <s.size() ; ++j) {
            if(s[j]=='A'){
                absent++;
            }
            if(absent>=2){
                return false;
            }
            if(j+2<s.size()){
                if(s[j]=='L'&&s[j+1]=='L'&&s[j+2]=='L'){
                    return false;
                }
            }
        }
        return true;
    }
};
int main() {
    cout<<(new Solution())->checkRecord("PPALLL")<<endl;
}
