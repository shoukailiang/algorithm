#include <iostream>
#include "vector"
#include "algorithm"
#include "unordered_set"
#include "stack"
#include "queue"
using namespace std;

class Solution {
private:
    int fn[101];
public:
    int climbStairs(int n) {
        fn[0] = 0;
        fn[1] = 1;
        fn[2] = 2;
        for(int i =3;i<=n;i++){
            fn[i] = (fn[i-1]+fn[i-2]);
        }
        return fn[n];
    }
};
int main() {
    int num = (new Solution)->climbStairs(2);
    cout<<num<<endl;
    return 0;
}
