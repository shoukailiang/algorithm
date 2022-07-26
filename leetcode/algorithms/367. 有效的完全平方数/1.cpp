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
    bool isPerfectSquare(int num) {
        int l =1;
        int r = num;
        while(l<=r){
            long long mid = l+(r-l)/2;
            if(mid*mid>num){
                r =mid-1;
            }else if(mid*mid<num){
                l=mid+1;
            }else{
                return true;
            }
        }
        return false;
    }
};

int main() {
    string a= "aa";
    string b ="ab";
    bool res = Solution().isPerfectSquare(15);
    cout<<res<<endl;
    return 0;
}
