#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n-1;
        int mid = (r-l)/2+l;
        while(l<=r){
            mid = (r-l)/2+l;
            if(isBadVersion(mid+1)){
                r =mid-1;
            }else {
                l=mid+1;
            }
        }
        return l+1;
    }
};
int main() {


    return 0;
}
