class Solution {
private:
    int fn[101];
public:
    int fib(int n) {
        fn[0] = 0;
        fn[1] = 1;
        for(int i =2;i<=n;i++){
            fn[i] = (fn[i-1]+fn[i-2])%1000000007;
        }
        return fn[n];
    }
};