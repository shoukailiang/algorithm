class Solution {
public:
    int reverse(int x) {

        long i = 0;
        long t =x;
        while(t){
            i = 10*i+t%10;
            t/=10;
        }
        if(i>INT_MAX||i<INT_MIN){
            return 0;
        }

        return i;
    }
};