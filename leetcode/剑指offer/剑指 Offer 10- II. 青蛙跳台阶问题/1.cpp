class Solution {
private:
    int fn[101];
public:
    int numWays(int n) {
        fn[0] = 1;
        fn[1] = 1;
        fn[2] = 2;
        for(int i =3;i<=n;i++){
            fn[i] = (fn[i-1]+fn[i-2])%1000000007;
        }
        return fn[n];
    }
};