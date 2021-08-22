class Solution {
public:
    int numWays(int n) {
        if(n==0) return 1;
        if(n==1) return 1;
        if(n==2) return 2;
        int a[n+1];
        a[0] = a[1] = 1;
        a[2] = 2;
        for(int i=3;i<=n;i++){
            a[i] = a[i-2]%1000000007+a[i-1]%1000000007;
        }
        return a[n]%1000000007;
    }
};