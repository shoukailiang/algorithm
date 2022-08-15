class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        long ans = 1;
        while(1){
            ans*=4;
            if(ans==n) return true;
            else if(ans>n) return false;
        }
        return false;
    }
};